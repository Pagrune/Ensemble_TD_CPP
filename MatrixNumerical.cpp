#include "MatrixNumerical.h"
#include <stdexcept>

MatrixNumerical::MatrixNumerical(std::size_t rows, std::size_t cols, double init_data)
    : MatrixBase<double>(rows, cols, init_data) {}


double MatrixNumerical::getDeterminant() const {
    // Cas 1 : matrice 1x1
    if (rows == 1 && cols == 1) {
        return data_[0][0];
    }

    // Cas 2 : matrice 2x2
    if (rows == 2 && cols == 2) {
        return data_[0][0] * data_[1][1] - data_[0][1] * data_[1][0];
    }

    // Cas général : matrice nxn
    if (rows != cols) {
        throw std::logic_error("Determinant undefined for non-square matrix");
    }

    double det = 0.0;

    // Développement par la première ligne
    for (std::size_t j = 0; j < cols; j++) {
        MatrixNumerical cof = getCoFactor(0, j);

        double sign = (j % 2 == 0) ? 1.0 : -1.0;

        det += sign * data_[0][j] * cof.getDeterminant();
    }

    return det;
}


MatrixNumerical MatrixNumerical::operator+(const MatrixNumerical& other) const {
    if (rows != other.rows || cols != other.cols) {
        throw std::invalid_argument("Matrix dimensions must agree for addition.");
    }

    MatrixNumerical result(rows, cols, 0.0);
    for (std::size_t i = 0; i < rows; ++i) {
        for (std::size_t j = 0; j < cols; ++j) {
            result.addElement(i, j, this->getElement(i, j) + other.getElement(i, j));
        }
    }
    return result;
}

MatrixNumerical MatrixNumerical::operator-(const MatrixNumerical& other) const {
    if (rows != other.rows || cols != other.cols) {
        throw std::invalid_argument("Matrix dimensions must agree for subtraction.");
    }

    MatrixNumerical result(rows, cols, 0.0);
    for (std::size_t i = 0; i < rows; ++i) {
        for (std::size_t j = 0; j < cols; ++j) {
            result.addElement(i, j, this->getElement(i, j) - other.getElement(i, j));
        }
    }
    return result;
}

MatrixNumerical MatrixNumerical::operator*(const MatrixNumerical& other) const {
    if (cols != other.rows) {
        throw std::invalid_argument("Matrix dimensions must agree for multiplication.");
    }

    MatrixNumerical result(rows, other.cols, 0.0);
    for (std::size_t i = 0; i < rows; ++i) {
        for (std::size_t j = 0; j < other.cols; ++j) {
            double sum = 0.0;
            for (std::size_t k = 0; k < cols; ++k) {
                sum += this->getElement(i, k) * other.getElement(k, j);
            }
            result.addElement(i, j, sum);
        }
    }
    return result;
}

MatrixNumerical MatrixNumerical::getCoFactor(std::size_t p, std::size_t q) const {
    MatrixNumerical result(rows - 1, cols - 1, 0.0);

    std::size_t r = 0, c = 0;

    for (std::size_t i = 0; i < rows; i++) {
        if (i == p) continue;

        c = 0;
        for (std::size_t j = 0; j < cols; j++) {
            if (j == q) continue;

            result.addElement(r, c, this->data_[i][j]);
            c++;
        }
        r++;
    }
    return result;
}

MatrixNumerical MatrixNumerical::getInverse() const {
    double det = getDeterminant();
    if (det == 0)
        throw std::runtime_error("Matrix is singular, no inverse exists.");

    MatrixNumerical adj(rows, cols, 0.0);

    // Calcul de l'adjointe (matrice des cofacteurs transposée)
    for (std::size_t i = 0; i < rows; i++) {
        for (std::size_t j = 0; j < cols; j++) {
            MatrixNumerical cof = getCoFactor(i, j);

            double sign = ((i + j) % 2 == 0) ? 1 : -1;
            double value = sign * cof.getDeterminant();

            // on transpose en même temps (adjointe = transposée des cofacteurs)
            adj.addElement(j, i, value);
        }
    }

    // Division par le déterminant → inverse
    MatrixNumerical inv(rows, cols, 0.0);

    for (std::size_t i = 0; i < rows; i++) {
        for (std::size_t j = 0; j < cols; j++) {
            inv.addElement(i, j, adj.getElement(i, j) / det);
        }
    }

    return inv;
}

MatrixNumerical MatrixNumerical::operator/(const MatrixNumerical& other) const {
    MatrixNumerical other_inv = other.getInverse();
    return (*this) * other_inv;
}

MatrixNumerical MatrixNumerical::getIdentity(int n) {
    MatrixNumerical identity(n, n, 0.0);
    for (int i = 0; i < n; ++i) {
        identity.addElement(i, i, 1.0);
    }
    return identity;
}
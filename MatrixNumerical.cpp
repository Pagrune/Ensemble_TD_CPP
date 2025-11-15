#include "MatrixNumerical.h"

MatrixNumerical::MatrixNumerical(std::size_t rows, std::size_t cols, double init_data)
    : MatrixBase<double>(rows, cols, init_data) {}


double MatrixNumerical::getDeterminant() const {
    // Implémentation simple pour les matrices 2x2
    if (rows == 2 && cols == 2) {
        return data_[0][0] * data_[1][1] - data_[0][1] * data_[1][0];
    } else {
        throw std::logic_error("Determinant calculation is only implemented for 2x2 matrices.");
    }
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
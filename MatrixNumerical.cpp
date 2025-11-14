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


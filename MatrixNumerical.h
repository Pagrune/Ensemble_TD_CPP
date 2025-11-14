#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H
#include "MatrixBase.h"

class MatrixNumerical : public MatrixBase<double>{
    public:
        MatrixNumerical();
        MatrixNumerical(std::size_t rows, std::size_t cols, const std::vector<std::vector<double>>& data);

        double getDeterminant() const;
};

#endif
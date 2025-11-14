#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H
#include "MatrixBase.h"

class MatrixNumerical : public MatrixBase<double>{
    public:
        MatrixNumerical();
        MatrixNumerical(std::size_t rows, std::size_t cols, double init_data);

        double getDeterminant() const;
};

#endif
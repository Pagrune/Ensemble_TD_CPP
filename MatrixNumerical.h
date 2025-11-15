#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H
#include "MatrixBase.h"

class MatrixNumerical : public MatrixBase<double>{
    public:
        MatrixNumerical();
        MatrixNumerical(std::size_t rows, std::size_t cols, double init_data);

        double getDeterminant() const;

        // Définir les opérateurs spécifiques aux matrices 
        MatrixNumerical operator+(const MatrixNumerical& other) const;
        MatrixNumerical operator-(const MatrixNumerical& other) const;
        MatrixNumerical operator*(const MatrixNumerical& other) const;

        MatrixNumerical getInverse() const;
    private:
        MatrixNumerical getCoFactor(std::size_t p, std::size_t q) const;

};

#endif
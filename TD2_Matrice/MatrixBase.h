#ifndef MATRIXBASE_H
#define MATRIXBASE_H
#include <vector>


template <typename T>
class MatrixBase {
    protected:
        std::vector<std::vector<T>> data_;
        std::size_t rows;
        std::size_t cols;

    public:
        MatrixBase();
        MatrixBase(std::size_t rows, std::size_t cols, T init_data);

        void addElement(int row, int col, T value);

        T getElement(int row, int col) const;

        std::size_t getRows() const;

        std::size_t getCols() const;

        void Display() const;

};




#include "MatrixBase.tpp"



#endif
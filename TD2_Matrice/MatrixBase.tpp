#include <iostream>
#include "MatrixBase.h"

template <typename T>
MatrixBase<T>::MatrixBase() : rows(0), cols(0) {}

template <typename T>
MatrixBase<T>::MatrixBase(std::size_t rows, std::size_t cols, T init_value)
    : rows(rows), cols(cols),
      data_(rows, std::vector<T>(cols, init_value)) {}

template <typename T>
void MatrixBase<T>::addElement(int row, int col, T value) {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        data_[row][col] = value;
    } else {
        throw std::out_of_range("Index out of bounds");
    }
}

template <typename T>
T MatrixBase<T>::getElement(int row, int col) const {
    if (row >= 0 && row < rows && col >= 0 && col < cols) {
        return data_[row][col];
    } else {
        throw std::out_of_range("Index out of bounds");
    }
}

template <typename T>
void MatrixBase<T>::Display() const {
    for (const auto& row : data_) {
        for (const auto& elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}


template <typename T>
std::size_t MatrixBase<T>::getRows() const {
    return rows;
}

template <typename T>
std::size_t MatrixBase<T>::getCols() const {
    return cols;
}

#include "MatrixBase.h"
#include "MatrixNumerical.h"
#include <iostream>

int main() {
    // créer une matrice de 3*3
    MatrixNumerical M(2, 2, 1);

    M.Display();

    // Modifie quelques éléments pour tester
    M.addElement(0, 1, 5);
    M.addElement(1, 1, 9);

    std::cout << std::endl <<"Matrice modifiée" << std::endl;

    // Affiche la matrice
    M.Display();

    double det = M.getDeterminant();

    std::cout << "Determinant: " << det << std::endl;

    return 0;
}
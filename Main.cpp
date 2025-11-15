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


    MatrixNumerical N(2, 2, 2);
    MatrixNumerical P = M + N;

    std::cout << std::endl << "Matrice M + N:" << std::endl;
    P.Display();

    MatrixNumerical Q = M - N;
    std::cout << std::endl << "Matrice M - N:" << std::endl;
    Q.Display();

    MatrixNumerical R = M * N;
    std::cout << std::endl << "Matrice M * N:" << std::endl;
    R.Display();
    return 0;
}
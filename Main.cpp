#include "MatrixBase.h"
#include "MatrixNumerical.h"
#include <iostream>

int main() {
    // créer une matrice de 3*3
    MatrixNumerical M(2, 2, 1);

    std::cout << "rows = " << M.getRows() << ", cols = " << M.getCols() << std::endl;
    std::cout << "Matrice initiale M :" << std::endl;

    M.Display();

    // Modifie quelques éléments pour tester
    M.addElement(0, 1, 5);
    M.addElement(1, 1, 9);

    std::cout << std::endl <<"Matrice modifiée M" << std::endl;

    // Affiche la matrice
    M.Display();

    double det = M.getDeterminant();

    std::cout << "Determinant: " << det << std::endl;


    MatrixNumerical N(2, 2, 2);
    std::cout << std::endl << "Matrice N :" << std::endl;
    N.addElement(0, 1, 4);
    N.addElement(1, 0, 6);
    N.Display();

    MatrixNumerical P = M + N;

    std::cout << std::endl << "Matrice M + N:" << std::endl;
    P.Display();

    MatrixNumerical Q = M - N;
    std::cout << std::endl << "Matrice M - N:" << std::endl;
    Q.Display();

    MatrixNumerical R = M * N;
    std::cout << std::endl << "Matrice M * N:" << std::endl;
    R.Display();

    MatrixNumerical inv = M.getInverse();
    std::cout << std::endl << "Inverse de M:" << std::endl;
    inv.Display();


    MatrixNumerical S = M / N;
    std::cout << std::endl << "Matrice M / N:" << std::endl;
    S.Display();

    // Matrice identité
    MatrixNumerical I = MatrixNumerical::getIdentity(3);
    std::cout << std::endl << "Matrice identité 3x3:" << std::endl;
    I.Display();

    return 0;
}
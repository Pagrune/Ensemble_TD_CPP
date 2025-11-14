#include "MatrixBase.h"
#include <iostream>

int main() {
    // créer une matrice de 3*3
    MatrixBase<int> M(3, 3, 1);

    M.Display();

    // Modifie quelques éléments pour tester
    M.addElement(0, 1, 5);
    M.addElement(2, 2, 9);

    std::cout << std::endl <<"Matrice modifiée" << std::endl;

    // Affiche la matrice
    M.Display();

    return 0;
}
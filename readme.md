📘 Matrix Project — C++

Projet universitaire visant à implémenter une hiérarchie de classes permettant la manipulation de matrices numériques en C++ (création, affichage, opérations, déterminant, inverse, cofacteurs…).

---

🧱 Description des classes
🔹 MatrixBase<T>

Classe template représentant la structure générale d'une matrice :

stockage interne des données (```std::vector<std::vector<T>>```)

méthodes de base :

getElement()

addElement()

Display()

gestion des tailles (rows, cols)

Cette classe sert uniquement d’interface générique pour toute matrice.

---
🔹 MatrixNumerical

Classe dérivée spécialisée pour les matrices numériques (double).

Fonctionnalités implémentées :

➕ Opérations

operator+

operator-

operator*

operator/ (via inverse)

📐 Déterminant

Calcul 1×1

Calcul 2×2

Développement récursif par cofacteurs pour n×n

🔁 Cofacteur

getCoFactor(i, j)
Construit la sous-matrice obtenue en supprimant la ligne i et la colonne j.

🔄 Inverse

getInverse()
Calcule l'inverse par la formule :

inverse(M) = adj(M) / det(M)

où adj(M) est la transposée des cofacteurs.

🧩 Fonction statique

static MatrixNumerical getIdentity(int n)
Retourne une matrice identité n×n.
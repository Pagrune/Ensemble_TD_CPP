# 📂 TD3_CPP — Structures de données en C++  

Bienvenue dans **TD3_CPP**, un petit projet universitaire en C++ regroupant plusieurs exercices et démonstrations autour des **structures de données** de la STL.  

---

## 🎯 Présentation

Ce projet est un **Travaux Dirigés en C++** portant sur l’utilisation de plusieurs conteneurs standard :

- `std::vector`  
- `std::map`  
- `std::unordered_map`  
- `std::queue` & `std::stack`  

C’est un bon support d’apprentissage pour comprendre les structures de données, leur fonctionnement, leurs performances et leurs cas d’usage.

---

## ✨ Fonctionnalités

Voici ce que tu trouveras dans le projet :

- Manipulation dynamique d’un `vector`  
- Navigation et gestion d’un `map`
- Utilisation d’un `unordered_map`  
- Manipulation de piles (`stack`) et files (`queue`)

### 🔁 1. Vérification de palindrome (Queue + Stack)
**Fichier : `Queue_Stack.cpp`**

- Utilisation d’une `queue` (FIFO) et d’une `stack` (LIFO)
- Comparaison miroir lettre par lettre
- Tests automatiques sur `"racecar"`, `"hello"`, `"kayak"`

---

### ➕ 2. Two Sum (Brute Force & Optimal avec Hash Map)
**Fichier : `Unordered_Map.cpp`**

- Méthode brute force : double boucle → O(n²)
- Méthode optimale : `unordered_map` (hash) → O(n)
- Retourne les indices des deux nombres dont la somme = target

---

### 🔢 3. Comptage de fréquences (Brute Force & Optimal Map)
**Fichier : `Map.cpp`**

- Méthode brute force : boucles imbriquées + set pour éviter les répétitions  
- Méthode rapide : `map<int, int>` pour compter efficacement  
- Affichage de chaque élément et son nombre d’occurrences

---

### 📦 4. Manipulations complètes d’un `vector`
**Fichier : `Vector.cpp`**

Démonstration des opérations classiques sur vecteur :

- `push_back`
- `pop_back`
- accès par index
- boucles `for`, `auto`, iterators
- `insert`, `erase`
- `sort`
- création de vecteurs 2D (`vector<vector<int>>`)


## 🛠️ Installation & Compilation

Compilation avec `g++` :

```bash
# Compilation séparée
g++ -std=c++17 Map.cpp -o MapDemo
g++ -std=c++17 Unordered_Map.cpp -o UnordMapDemo
g++ -std=c++17 Queue_Stack.cpp -o QueueStackDemo
g++ -std=c++17 Vector.cpp -o VectorDemo
```


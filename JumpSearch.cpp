#include "JumpSearch.h"
#include <cmath>
#include <algorithm> // pour sort()
using namespace std;

int JumpSearch::search(const vector<int>& data, int target) {
    // Réinitialisation du compteur pour cette recherche
    numberComparisons = 0;

    // Copie et tri du vecteur (Jump Search nécessite un tableau trié)
    vector<int> sortedData = data;
    sort(sortedData.begin(), sortedData.end());

    int n = sortedData.size();
    int step = sqrt(n);
    int prev = 0;

    // Trouver le bloc où se trouve potentiellement la valeur
    while (prev < n && sortedData[min(step, n) - 1] < target) {
        numberComparisons++;
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1; // pas trouvé
    }

    // Recherche linéaire dans le bloc trouvé
    while (prev < min(step, n)) {
        numberComparisons++;
        if (sortedData[prev] == target)
            return prev; // trouvé
        prev++;
    }

    // Élément non trouvé
    return -1;
}

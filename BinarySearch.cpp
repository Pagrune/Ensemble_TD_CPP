#include "BinarySearch.h"
#include <algorithm>
using namespace std;

int BinarySearch::search(const vector<int>& data, int target) {
    // Réinitialisation du compteur pour cette recherche
    numberComparisons = 0;

    // Copie et tri du vecteur (Binary Search nécessite un tableau trié)
    vector<int> sortedData = data;
    sort(sortedData.begin(), sortedData.end());

    int left = 0;
    int right = sortedData.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        numberComparisons++; // Comparaison avec l'élément du milieu

        if (sortedData[mid] == target) {
            return mid; // Élément trouvé
        }
        else if (sortedData[mid] < target) {
            left = mid + 1; // Chercher dans la moitié droite
        }
        else {
            right = mid - 1; // Chercher dans la moitié gauche
        }
    }

    // Élément non trouvé
    return -1;
}
#include "LinearSearch.h"
using namespace std;

int LinearSearch::search(const vector<int>& data, int target) {
    // Réinitialisation du compteur pour cette recherche
    numberComparisons = 0;

    // Parcours séquentiel du tableau
    for (int i = 0; i < data.size(); ++i) {
        numberComparisons++;  // On compte chaque comparaison
        if (data[i] == target) {
            // Élément trouvé
            return i;
        }
    }

    // Élément non trouvé
    return -1;
}

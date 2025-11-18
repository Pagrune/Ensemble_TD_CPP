#include "SearchingAlgorithm.h"
using namespace std;

long SearchingAlgorithm::totalComparisons = 0;
long SearchingAlgorithm::totalSearch = 0;
double SearchingAlgorithm::averageComparisons = 0;

SearchingAlgorithm::SearchingAlgorithm() {
    numberComparisons = 0;
}

void SearchingAlgorithm::displaySearchResults(ostream& out, int results, int target) {
    // Mise à jour des statistiques globales
    totalComparisons += numberComparisons;
    totalSearch += 1;
    averageComparisons = static_cast<double>(totalComparisons) / totalSearch;

    // Affichage des résultats
    out << "Search results for target " << target << " : ";
    if (results != -1) {
        out << "Found at index " << results << ".";
    } else {
        out << "Not found.";
    }

    // Affichage des statistiques
    out << "\nComparisons for this search: " << numberComparisons;
    out << "\nTotal comparisons: " << totalComparisons;
    out << "\nAverage comparisons: " << averageComparisons << endl;
}

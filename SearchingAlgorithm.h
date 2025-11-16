
#ifndef SEARCHINGALGORITHM_H
#define SEARCHINGALGORITHM_H


#include <vector>
#include <iostream>
using namespace std;

class SearchingAlgorithm {
    protected:
    int numberComparisons;

    public:

    SearchingAlgorithm();

    // fonction virtuelle pure search 
    virtual int search(const vector<int>& data, int target) = 0;

    
    static long totalComparisons;
    static long totalSearch;
    static double averageComparisons;

    void displaySearchResults(ostream& out, int results, int target);
};

#endif
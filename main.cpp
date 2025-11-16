#include <iostream>
#include "LinearSearch.h"
#include "JumpSearch.h"
#include "BinarySearch.h"
using namespace std;

int main() {
    vector<int> data = {5, 3, 2, 9, 1, 7, 4, 6, 8, 17, 12, 15, 14, 11, 10, 13};
    int target = 8;

    LinearSearch linear;
    int resultLinear = linear.search(data, target);

    JumpSearch jump;
    int resultJump = jump.search(data, target);

    BinarySearch binary;
    int resultBinary = binary.search(data, target);


    cout << "Linear Search Results:" << endl;
    linear.displaySearchResults(cout, resultLinear, target);

    cout << "\nJump Search Results:" << endl;
    jump.displaySearchResults(cout, resultJump, target);

    cout << "\nBinary Search Results:" << endl;
    binary.displaySearchResults(cout, resultBiary, target);

    return 0;
}

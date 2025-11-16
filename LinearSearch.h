#ifndef LINEARSEARCH_H
#define LINEARSEARCH_H

#include "SearchingAlgorithm.h"

class LinearSearch : public SearchingAlgorithm {
    public:
        int search(const vector<int>& data, int target) override;

};

#endif

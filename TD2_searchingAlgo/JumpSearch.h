#ifndef JUMPSEARCH_H
#define JUMPSEARCH_H

#include "SearchingAlgorithm.h"

class JumpSearch : public SearchingAlgorithm {        
    public:
        int search(const vector<int>& data, int target) override;

};

#endif
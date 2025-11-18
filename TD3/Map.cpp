#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <chrono>

using namespace std;
using namespace std::chrono;

void countFrequenciesBrutForce(const vector<int>& numbers){
       set<int> printed;  

    for(size_t i = 0; i < numbers.size(); i++){
        if(printed.find(numbers[i]) != printed.end()) {
            continue; 
        }

        int count = 0;
        for(size_t j = 0; j < numbers.size(); j++){
            if(numbers[i] == numbers[j]){
                count++;
            }
        }

        cout << numbers[i] << ": " << count << " times" << endl;
        printed.insert(numbers[i]); 
    }
}

map<int, int> countFrequenciesOptimal(const vector<int>& numbers){
    map<int, int> frequencyMap;
    for(int number : numbers){
        frequencyMap[number]++;
    }
    return frequencyMap;
}

int main(){
    vector<int> numbers = {1, 2, 3, 2, 4, 1, 5, 5, 6};

    cout << "Frequeny (Brute Force):" << endl;
    countFrequenciesBrutForce(numbers);

    cout << "Frequency (Optimal):" << endl;
    map<int, int> FrequencyMapOptimal = countFrequenciesOptimal(numbers);
    for(const auto& entry : FrequencyMapOptimal){
        cout << entry.first << ": " << entry.second << "times" << endl;
    }

    return 0;
}
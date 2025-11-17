#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <chrono>

using namespace std;
using namespace std::chrono;

void countFrequenciesBrutForce(const vector<int>& numbers){
       set<int> printed;  // garde les nombres déjà affichés

    for(size_t i = 0; i < numbers.size(); i++){
        if(printed.find(numbers[i]) != printed.end()) {
            continue; // déjà compté, on passe
        }

        int count = 0;
        for(size_t j = 0; j < numbers.size(); j++){
            if(numbers[i] == numbers[j]){
                count++;
            }
        }

        cout << numbers[i] << ": " << count << " times" << endl;
        printed.insert(numbers[i]); // marque ce nombre comme affiché
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

     // Mesurer le temps pour la méthode brute-force
    auto startBF = high_resolution_clock::now();
    cout << "Frequency (Brute Force):" << endl;
    countFrequenciesBrutForce(numbers);
    auto endBF = high_resolution_clock::now();
    auto durationBF = duration_cast<microseconds>(endBF - startBF);
    cout << "Brute Force duration: " << durationBF.count() << " microseconds" << endl << endl;

    // Mesurer le temps pour la méthode optimale
    auto startOpt = high_resolution_clock::now();
    cout << "Frequency (Optimal):" << endl;
    map<int, int> FrequencyMapOptimal = countFrequenciesOptimal(numbers);
    for(const auto& entry : FrequencyMapOptimal){
        cout << entry.first << ": " << entry.second << " times" << endl;
    }
    auto endOpt = high_resolution_clock::now();
    auto durationOpt = duration_cast<microseconds>(endOpt - startOpt);
    cout << "Optimal duration: " << durationOpt.count() << " microseconds" << endl;

    return 0;
}
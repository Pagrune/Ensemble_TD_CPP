#include <iostream>
#include "my_class.h"

using namespace std;

my_class::my_class() : _string("") {
    // Constructeur par défaut
}

my_class::my_class(std::string str) : _string(str) {
    // Constructeur avec paramètre
}

void my_class::print_my_element(std::string _string) {
    cout << "My element is: " << _string << endl;
}

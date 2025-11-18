#include <iostream>
#include "my_class.h"

using namespace std;

my_class::my_class() : _str() {
    // Constructeur par défaut
}

my_class::my_class(string& str) : _str(str) {
    // Constructeur avec paramètre
}

void my_class::print_my_element(string& _str) {
    cout << "My element is: " << _str << endl;
}

#include <iostream>
#include "my_class.h"

using namespace std;


int main(int argc, char** argv) {
    string argument = argv[1];

    my_class my_class(argument);
    my_class.print_my_element(argument);

    return 0;
}



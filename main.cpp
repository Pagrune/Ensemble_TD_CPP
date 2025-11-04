#include <iostream>
using namespace std;

#include "my_class.h"
#include "main.h"

int main(int argc, char** argv) {
    string name = "Hello World!";
    cout << name << endl;

    // récupérer arguments de la ligne de commande
    for (int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
    
    cout << "Hello World!" << endl;

    my_main mm;
    mm.do_something();

    my_class mc();
    mc.print_my_element("Sample String");


    return 0;
}

void my_main::do_something() {
    cout << "Doing something!" << endl;
}

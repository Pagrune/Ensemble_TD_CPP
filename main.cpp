#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    string name = "Hello World!";
    cout << name << endl;

    // récupérer arguments de la ligne de commande
    for (int i = 0; i < argc; i++) {
        cout << "Argument " << i << ": " << argv[i] << endl;
    }
    
    cout << "Hello World!";
    return 0;
}
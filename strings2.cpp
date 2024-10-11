#include <iostream>
#include <string>

using namespace std;

int main () {
    string frase = "*";

    int niveles;
    cout << "Ingrese un numero: ";
    cin >> niveles;

    for (int i = 0; i < niveles; i++) {
        cout << frase << endl;
        frase += "*";
    }

    return 0;
}
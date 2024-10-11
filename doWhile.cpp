// DO WHILE
#include <iostream>

using namespace std;

int main () {

    int secreto = 3;
    int numero;

    do {
        cout << "Ingrese un numero: " ;
        cin >> numero;
 
        if (numero != secreto) {
            cout << "Ese no es el numero" << endl;
        }

    } while ( numero != secreto );

    cout << "Le atinaste" << endl;

    return 0;
}
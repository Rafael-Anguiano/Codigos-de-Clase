#include <iostream>

using namespace std;

int main () {

    /*
    int index = 0;

    while ( index < 10 ) {
        cout << "Estoy en un bucle" << endl;
        index++;
    }

    index = 0;

    do {
        cout << "Estoy en un bucle" << endl;
        index++;
    } while ( index < 10 );
    */

    int numero = 0;
    int index = 0;

    while ( index < 5 ) {
        cout << "Ingrese un numero: " ;
        cin >> numero;

        cout << "Cuadrado de " << numero << " : " << numero * numero << endl;
        index++;
    }


    return 0;
}
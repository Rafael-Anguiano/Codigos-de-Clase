#include <iostream>
#include <string>

using namespace std;

int main () {
    
    string frase = "Hola mi nombre es botanito";
    string fraseSinEspacios = "";

    cout << frase << endl;

    for (int i = 0; i < frase.length(); i++) {
        if ( frase[i] != ' ') {
            fraseSinEspacios += frase[i];
        }
    }

    cout << fraseSinEspacios << endl;

    return 0;
}
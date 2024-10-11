#include <iostream>
#include <string>

using namespace std;

int main () {

    string frase = "Hola soy Botanito";

    for (int i = 0; i < frase.length(); i++) {
        cout << frase[i] << endl;
    }

    return 0;
}
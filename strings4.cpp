#include <iostream>
#include <string>

using namespace std;

int main () {

    string fraseOriginal = "anitalavalatina";
    string fraseAlReves = "";

    // Conseguir palabra volteada
    for ( int i = fraseOriginal.length()-1; i >=0; i-- ) {
        fraseAlReves += fraseOriginal[i];
    }

    if (fraseOriginal == fraseAlReves) {
        cout << "Si es palindromo" << endl;
    } else {
        cout << "No es palindromo" << endl;
    }

    return 0;
}
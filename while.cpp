#include <iostream>

using namespace std;

void cicloWhile ( int vecesEjecucion ) {
    int numero1 = 0;

    // while (   condicion   )
    while ( numero1 < vecesEjecucion ) {
        // Bloque de codigo a repetir
        cout << "While" << endl;

        // numero1 = numero1 + 1;
        // numero1 += 1;
        numero1++;
    }
}

void cicloDoWhile (int vecesEjecucion) {
    int numero1 = 0;
    do {
        cout << "Do... While" << endl;
        numero1++;
    } while ( numero1 < 10 );
}

void cicloFor () {
    for ( int index = 0; index < 10; index++ ) {
        // Bloque a repetir
        cout << 10 - index << endl;
    }
}


int main () {
    int numero1 = 0;
    while ( numero1 <= 10 ) {
        cout << numero1 * numero1 << endl;
        numero1++;
    }100
    return 0;
}




for (int index = 0; index < 10; index++ ) {

    // index % 2 == 1    impar
    // index % 2 == 0    par

}














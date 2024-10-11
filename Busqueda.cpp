#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int busquedaLineal (vector<int> numeros, int objetivo) {
    for (int i=0; i < numeros.size(); i++ ) {
        if ( numeros[i] == objetivo ) {
            return i;
        }
    }
    return -1;
}

int busquedaBinaria (vector<int> numeros, int objetivo) {
    int izquierdo = 0;
    int derecho = numeros.size() - 1;

    while ( izquierdo <= derecho  ) {
        int mitad = izquierdo + floor( (derecho - izquierdo) / 2 );
        
        if ( numeros[mitad] == objetivo ) {
            return mitad;
        } else if ( numeros[mitad] < objetivo ) {
            izquierdo = mitad + 1;
        } else {
            derecho = mitad - 1;
        }
    }
    return -1;
}


// floor // Redondeo hacia abajo
// ceil // Redondeo hacia arriba
// round // General

int sumaPares (vector<int> numeros) {
    int result = 0;
    for (int i=0; i < numeros.size(); i++ ) {
        if ( numeros[i] % 2 == 0 ) {
            result += numeros[i];
        }
    }
    return result;
}



int main () {

    vector<int> numeros = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int target = 14;

    cout << "Posicion del objetivo lineal: " << busquedaLineal(numeros, target) << endl;
    cout << "Posicion del objetivo binaria: " << busquedaBinaria(numeros, target);

    return 0;
}
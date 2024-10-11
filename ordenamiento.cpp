#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main () {

    vector<int> numeros = {10, 3, 5, 15, 1, 2, 4};

    // Ordenamiento Burbuja
    for (int x = 0; x < numeros.size(); x++) {
        for (int i = 0; i < numeros.size() - 1; i++) {
            if ( numeros[i] > numeros[i + 1] ) {
                int temp = numeros[i];   
                numeros[i] = numeros[i + 1]; 
                numeros[i + 1] = temp;
            }
        }
    }

    // Ordenamiento Default, en libreria <algorithm>
    sort(numeros.begin(), numeros.end());

    // Imprimir vector
    for (int i = 0; i<numeros.size(); i++) {
        cout << numeros[i] << " ";
    }

    return 0;
}
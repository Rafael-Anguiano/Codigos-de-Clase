#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {

    vector<string> palabras = { "Chocomilk", "Arroz", "Mole de Birria" };

    for (int i = 0; i< palabras.size(); i++) { // Recorre el vector
        for (int j = 0; j < palabras[i].length(); j++) { // Recorre letra por letra
            cout << palabras[i][j];
        } 
    }     

    vector< vector<int> > matriz = { {1, 2, 3}, {5, 6, 7}, { 8, 9} }; 

    for (int i = 0; i< matriz.size(); i++) { // Recorre el vector
        for (int j = 0; j < matriz[i].size(); j++) { // Recorre letra por letra
            cout << matriz[i][j];
        } 
    }     

    return 0;
}



vector<int> numeros = {10, 15, 20};
vector <int> numeros1 = {20, 15, 10};

numeros[0] = 35;
numeros[2] // Ultimo elemento siempre va a ser el tamaño del vector - 1

numeros.size() // Da el tamaño del vector
numeros.push_back(25) // Agrega un elemento al final
numeros.pop_back() // Quita un elemento del final







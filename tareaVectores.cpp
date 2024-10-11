#include <iostream>
#include <vector>

using namespace std;

int main () {

    // Crear 2 vectores
    vector<int> numeros1 = {1, 2, 3, 4, 5};
    vector<int> numeros2 = {};    
    
    // Pasar valores del vec1 al vec2 al reves
    while ( numeros1.size() != 0 ) {
        numeros2.push_back( numeros1[numeros1.size() - 1 ] );
        
        // vaciar vector 1
        numeros1.pop_back();
    }





    return 0;
}
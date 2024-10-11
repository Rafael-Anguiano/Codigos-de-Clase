#include <iostream>
#include <vector>
using namespace std;
int main () {

    vector<int> numeros = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};

    for ( int i = 0; i < numeros.size(); i++ ) {
        cout << numeros[i] << endl;
    }

    numeros.push_back(55);
    numeros.push_back(60);

    for ( int i = 0; i < numeros.size(); i++ ) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    numeros.pop_back(); // 60
    numeros.pop_back(); // 55
    numeros.pop_back(); // 50

    for ( int i = 0; i < numeros.size(); i++ ) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
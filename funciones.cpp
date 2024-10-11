#include <iostream>
#include <string>

using namespace std;

int suma ( int a, int b ) {
    int sum = a + b;
    cout << "Suma : " << sum << endl;
    return sum;
}

void print (string phrase) {
   cout << phrase << endl; 
}

int areaCuadrado (int lado) {
    return lado * lado;
}

int main () {

    int resultado = suma(5, 10);

    print("Hola esto es una funcion");
    
    return 0;
} 
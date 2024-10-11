#include <iostream>

using namespace std;

int main () {

    // FOR

    for ( int index = 0; index < 10; index++) {
        cout << index << endl;
    }

    for ( int index = 0; index < 10; index++) {
        
        if ( index % 2 == 0 ) {
            cout << "Es par" << endl;
        } else {
            cout << "Es impar" << endl;
        }

    }

    return 0;
}
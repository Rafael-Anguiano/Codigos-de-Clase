#include <iostream>

using namespace std;

int main () {
    cout << "1 ) Papitas" << endl;
    cout << "2 ) Chilaquiles" << endl;
    cout << "3 ) Lonche de chilaquiles" << endl;
    int opt = 2;
    cin >> opt;

    switch ( opt ) {
        case 1: {
                cout << "El valor de num es 1" << endl;
            }
            break;
        case 2: {
                cout << "El valor de num es 2" << endl;
            }
            break;
        case 3: {
                cout << "El valor de num es 3" << endl;
            }
            break;
        default:
            cout << "Opcion invalida" << endl;
    }

    return 0;
}
#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<int> tabla2 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int objetivo = 14;
    int result = -1;

    for (int index=0; index < tabla2.size(); index++ ) {
        if ( tabla2[index] == objetivo) {
            cout << "Si esta, posicion: " << index << endl;
            result = index;
            break;
        }
    }
    
    if (result == -1) {
        cout << "No se encuentra" << endl;    
    }

    return 0;
}
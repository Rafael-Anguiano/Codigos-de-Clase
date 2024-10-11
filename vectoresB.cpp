#include <iostream>
#include <vector>

using namespace std;

int main () {

    vector<int> tabla2 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    cout << "Size: " << tabla2.size() << endl;

    int num = 0;
    cout << "Ingrese un valor: " << endl;
    cin >> num;

    tabla2.push_back(num);
    cout << "Size: " << tabla2.size() << endl;

    for (int index = 0; index < tabla2.size(); index++) {
        cout << tabla2[index] << endl;
    }
    
    tabla2.pop_back();
    cout << "Size: " << tabla2.size() << endl;

    return 0;
}
/*
 * Dado un valor M determinar y emitir un listado con los M primeros múltiplos
 * de 3 que no lo sean de 5, dentro del conjunto de los números naturales.
 *
 */


#include <iostream>
using namespace std;
int main() {
    int m;
    cout << "Ingrese cantidad de multiplos";
    cin >> m;
    for (int i = 1, count = 0; count < m; ++i) {
        int val = 3 * i;
        if (val % 5 == 0)
            continue;
        count++;
        cout << val << endl;
    }
    return 0;
}
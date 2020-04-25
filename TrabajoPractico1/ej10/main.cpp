/*
 * Dados N y M números naturales, informar su producto por sumas sucesivas
 *
 */

#include <iostream>
using namespace std;
int main() {
    int m;
    int n;

    cout << "Ingrese M:";
    cin >> m;
    cout << "Ingrese N:";
    cin >> n;


    int prod = 0;

    for (int i = 0; i < n; ++i) {
        prod += m;
    }

    cout << "El producto es: " << prod << endl;
    return 0;
}
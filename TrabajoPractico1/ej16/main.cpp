/*
 * Dados 10 valores informar el mayor
 *
 * consideramos que los valores son reales
 */
#include <iostream>
#include <limits>
using namespace std;
int main() {
    cout << "Ingrese 10 valores." << endl;
    double mayor = numeric_limits<double>::min();
    double numero;
    for (int i = 0; i < 10; ++i) {
        cin >> numero;
        if (numero > mayor)
            mayor = numero;
    }
    cout << "El mayor es: " << mayor;
    return 0;
}

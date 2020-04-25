/*
 * Dados 20 números enteros, informar el promedio de los mayores que 100 y la
 * suma de los menores que –10.
 */
#include <iostream>
using namespace std;
int main() {
    int numero;

    int mayoresDe45 = 0;

    int sumaMenores = 0;
    double promMayores = 0;

    cout << "Ingrese 20 numeros separados por enter.\n";
    for (int i = 0; i < 20; ++i) {
        cin >> numero;
        if (numero > 100){
            mayoresDe45++;
            promMayores += numero;
        }
        if (numero < -10){
            sumaMenores += numero;
        }
    }
    promMayores /= (double) mayoresDe45;
    cout << "El promedio de los mayores a 45 es: " << promMayores << endl;
    cout << "La suma de los menores a -10 es: " << sumaMenores << endl;
    return 0;
}

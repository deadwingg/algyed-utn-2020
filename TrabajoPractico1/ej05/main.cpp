/*
 *  Dados dos valores enteros y distintos, emitir una leyenda apropiada que informe
 *  cuál es el mayor entre ellos.
 */

#include <iostream>
using namespace std;

int main() {
    int numero1;
    int numero2;
    cout << "Ingrese primer numero:";
    cin >> numero1;
    cout << "Ingrese segundo numero:";
    cin >> numero2;

    cout << ((numero1 > numero2) ? "El primer numero es el mayor.\n" : "El segundo numero es el mayor.\n");
}

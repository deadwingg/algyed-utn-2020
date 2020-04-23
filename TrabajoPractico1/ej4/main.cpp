/*
 *  Ejercicio 5:
 *  A partir de un valor entero ingresado por teclado, se pide informar:
 *  a) La quinta parte de dicho valor
 *  b) El resto de la división por 5
 *  c) La séptima parte del resultado del punto a)
 *
 *  En la solucion informamos como "quinta parte" y "septima parte" la parte entera del cociente.
 */

#include <iostream>
using namespace std;

int main() {
    int numero = 9876;

    int quintaParte = numero / 5;
    int resto = numero % 5;
    int septimaDeLaQuinta = quintaParte / 7;

    cout << "Quinta parte: " << quintaParte << "\tResto: " << resto
         << "\tQuinta parte de la quinta parte: " << septimaDeLaQuinta << endl;
    return 0;
}

/*
 *  Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
 *  Informar la cantidad de valores ingresados
 *
 *  en la cuenta contamos el valor negativo como ingresado
 */
#include <iostream>

using namespace std;
int main() {
    cout << "Ingrese numeros, dato negativo para salir.";
    int cuenta = 0;
    int numero = 1;
    while (numero >= 0){
        cin >> numero;
        cuenta++;
    }
    cout << "Se han ingresado " << cuenta << "numeros.\n";
    return 0;
}

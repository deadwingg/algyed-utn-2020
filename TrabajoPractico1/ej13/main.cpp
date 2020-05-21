/*
 *  Ingresar e informar valores, mientras que el valor ingresado no sea negativo.
 *  Informar la cantidad de valores ingresados
 *
 *  No contamos el -1 como numero ingresado
 */
#include <iostream>

using namespace std;
int main() {
    cout << "Ingrese numeros, dato negativo para salir.\n";
    int cuenta = 0;
    int numero = 1;
    while (numero >= 0){
        cin >> numero;
        if (numero < 0){
            break;
        }
        cout << numero;
        cuenta++;
    }
    cout << "Se han ingresado " << cuenta << "numeros.\n";
    return 0;
}

/*
 * Ejercicio 3
 *  Dada una terna de números naturales que representan al día, al mes y al año de
 *  una determinada fecha informarla como un solo número natural de 8 dígitos (AAAAMMDD).
 *
 *  Para esta resolucion consideramos que la fecha ingresada es valida
 */
#include <iostream>
using namespace std;

int main() {
    int dia = 0;
    int mes = 0;
    int anio = 0;
    cout << "Ingrese dia: ";
    cin >> dia;
    cout << "Ingrese mes: ";
    cin >> mes;
    cout << "Ingrese anio: ";
    cin >> anio;

    // multiplicando por estos factores "acomodamos" las cifras para lograr el formato requerido
    int fecha = anio * 10000 + mes * 100 + dia;
    cout << fecha;
    return 0;
}

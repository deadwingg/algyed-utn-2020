/*
 *Se ingresa un conjunto de valores reales, cada uno de los cuales representan el
 * sueldo de un empleado, excepto el último valor que es cero e indica el fin del conjunto. Se pide
 * desarrollar un programa que determine e informe:
 * a) Cuántos empleados ganan menos $1.520.
 * b) Cuántos ganan $1.520 o más pero menos de $2.780.
 * c) Cuántos ganan $2.780 o más pero menos de $5.999.
 * d) Cuántos ganan $5.999 o más.
 *
 */
#include <iostream>
using namespace std;
int main() {
    cout << "Ingrese sueldos. (0 para finalizar)" << endl;
    double sueldo = 1;
    double d = 0;
    double c = 0;
    double b = 0;
    double a = 0;

    while (sueldo != 0){
        cin >> sueldo;
        if (sueldo >= 5999){
            d++;
            continue;
        }
        if (sueldo >= 2780){
            c++;
            continue;
        }
        if (sueldo >= 1520){
            b++;
            continue;
        }
        if (sueldo != 0){
            a++;
        }
    }
    cout << "cantidad de empleados por segmento salarial:\n";
    cout << "menos de $1.520\t" << a << endl;
    cout << "entre $1.520 y $2.779\t" << b << endl;
    cout << "entre $2.780 y $5.998\t" << c << endl;
    cout << "$5.999 o más\t" << d << endl;

    return 0;
}

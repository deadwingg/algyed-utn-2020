#include <iostream>
using namespace std;

int main() {
    int dia = 0;
    int mes = 0;
    int anio = 0;
    //las precondiciones serian que el ingreso de la terna sea una fecha valida:
    // dia entre 0 y 31 (30 o 28 o 29 segun el mes)
    // mes entre 0 y 12
    // anio entre 1 y 9999
    cout << "Ingrese dia: ";
    cin >> dia;
    cout << "Ingrese mes: ";
    cin >> mes;
    cout << "Ingrese anio: ";
    cin >> anio;

    int fecha = anio * 10000 + mes * 100 + dia;
    cout << fecha;
    return 0;
}

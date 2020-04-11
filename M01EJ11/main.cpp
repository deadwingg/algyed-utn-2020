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

    int fecha = anio * 10000 + mes * 100 + dia;
    cout << fecha;
    return 0;
}

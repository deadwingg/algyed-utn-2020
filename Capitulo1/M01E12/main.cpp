#include <iostream>
using namespace std;
int main() {
    int fecha = 0;
    cout << "Ingrese fecha: ";
    cin >> fecha;

    int digitos[8];

    for (int i = 0; i < 8; ++i, fecha/=10) {
        digitos[7 - i] = fecha % 10;
    }

    int anio = 1000 * digitos[0] + 100 * digitos[1] + 10 * digitos[2] + digitos[3];
    int mes = 10 * digitos[4] + digitos[5];
    int dia = 10 * digitos[6] + digitos[7];

    cout << "Dia: " << dia << "\tMes: " << mes << "\tAño: " << anio << endl;
    return 0;
}

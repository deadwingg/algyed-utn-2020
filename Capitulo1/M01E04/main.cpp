#include <iostream>
using namespace std;

int main() {
    // declaro variables a ingresar
    int a, b, c;
    // inicializo la suma a 0
    int sum = 0;
    // y uso los valores minimo y maximo para comparacion
    int great = std::numeric_limits<int>::min();
    int small = std::numeric_limits<int>::max();
    double  prom = 0;

    cout << "Ingrese número: ";
    cin >> a;
    cout << "Ingrese número: ";
    cin >> b;
    cout << "Ingrese número: ";
    cin >> c;

    sum = a + b + c;

    prom = sum / 3.0;

    great = a > b ? a : b;
    great = great > c ? great : c;

    small = a < b ? a : b;
    small = small < c ? small : c;

    cout << "Suma: " << sum << endl;
    cout << "Promedio: " << prom << endl;
    cout << "Mayor: " << great << endl;
    cout << "Menor: " << small << endl;
    return 0;
}

#include <iostream>
#include <limits>

using namespace std;
int main() {
    // el mayor numero negativo
    double mayor = -std::numeric_limits<double>::max();
    // el mayor numero positivo
    double menor = std::numeric_limits<double>::max();

    double val = -1;
    do {
        cout << "Ingrese valor: ";
        cin >> val;
        if (val > 0 && val < menor) {
            menor = val;
            continue;
        }
        if (val < 0 && val > mayor)
            mayor = val;
    } while (val != 0);

    cout << "El mayor de los negativos es: " << mayor << endl;
    cout << "El menor de los positivos es: " << menor << endl;
    return 0;
}

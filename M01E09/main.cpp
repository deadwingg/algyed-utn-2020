#include <iostream>

using namespace std;
int main() {
    int a = 0;
    int b = 0;

    cout << "Ingrese numero entero positivo:";
    cin >> a;
    cout << "Ingrese numero entero positivo:";
    cin >> b;

    if (a < 1 || b < 1){
        cout << "El numero no cumple la condicion" << endl;
        return 1;
    }
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Multiplicacion: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    return 0;
}

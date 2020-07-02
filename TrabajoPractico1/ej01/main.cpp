/*
    * A partir de dos valores enteros A y B, informar la suma, la diferencia, el cociente
    * y el producto. Determinar cómo detectar y evitar posibles errores en tiempo de ejecución.
    * Que debe agregarse para que con la división de enteros se obtenga un resultado no entero
    *
    * La solucion considera que se ingresan numeros enteros por teclado y que el denominador
    * es no nulo.
    *
    * Para obtener un resultado no entero realizamos un cast de los operandos.
    * Para evitar un error al dividir por 0 solo informamos la division si b es distinto de 0
 */
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ingrese primer operando:";
    cin >> a;
    cout << "Ingrese segundo operando:";
    cin >> b;
    cout << "Suma: " << a + b << endl;
    cout << "Resta: " << a - b << endl;
    cout << "Producto: " << a * b << endl;
    if (b == 0) {
        cout << "Cociente: No se puede dividir por 0\n";
        return 0;
    }
    cout << "Cociente: " << static_cast<double>(a) / static_cast<double>(b) << endl;
    return 0;
}

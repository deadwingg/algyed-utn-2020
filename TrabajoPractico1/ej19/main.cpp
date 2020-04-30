/*
 * Dado un conjunto de valores, que finaliza con un valor nulo, determinar e
 * imprimir (si hubo valores):
 * a) El valor máximo negativo
 * b) El valor mínimo positivo
 * c) El valor mínimo dentro del rango -17.3 y 26.9
 * d) El promedio de todos los valores.
 *
 * consideramos el maximo de los negativos el mas cercano a 0
 */
#include <iostream>
#include <limits>

using namespace std;
int main() {
    // el mayor numero negativo
    double mayNeg = -std::numeric_limits<double>::max();
    // el mayor numero positivo
    double minPos = std::numeric_limits<double>::max();
    double minRango = 26.9;
    bool hayPos = false;
    bool hayNeg = false;
    bool hayRango = false;

    double sumaTotal = 0;
    int cantidadDeValores = 0;

    double val;
    bool continuar = true;

    while (continuar) {
        cout << "Ingrese valor: ";
        cin >> val;
        if (val == 0){
            continuar = false;
            continue;
        }
        sumaTotal += val;
        cantidadDeValores++;

        if (val > 0 && val < minPos) {
            hayPos = true;
            minPos = val;
        }
        if (val < 0 && val > mayNeg) {
            hayNeg = true;
            mayNeg = val;
        }
        if (val >= -17.3 && val <= 26.9){
            hayRango = true;
            if (val < minRango)
                minRango = val;
        }
    }

    if (hayPos)
        cout << "El menor de los positivos es: " << minPos << endl;
    if (hayNeg)
        cout << "El mayor de los negativos es: " << mayNeg << endl;
    if (hayRango)
        cout << "El menor en el rango es: " << minRango << endl;
    if (cantidadDeValores > 0) {
        cout << "El promedio general es: " << sumaTotal/cantidadDeValores << endl;
    } else {
        cout << "No se ingresaron numeros.\n";
    }
    return 0;
}

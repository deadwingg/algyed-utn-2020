/*
 * Se dispone de un lote de valores enteros positivos que finaliza con un número negativo.
 * El lote está dividido en sublotes por medio de valores cero.
 * Desarrollar un programa que determine e informe:
 *  a) por cada sublote el promedio de valores -
 *  b) el total de sublotes procesados -
 *  c) el valor máximo del conjunto, indicando en que sublote se encontró
 *      y la posición relativa del mismo dentro del sublote
 *  d) valor mínimo de cada sublote  -
 * Nota: el lote puede estar vacío (primer valor negativo), o puede haber uno, varios o todos los
 * sublotes vacíos (ceros consecutivos)
 */
#include <iostream>
#include <limits>
using namespace std;
int main() {
    cout << "Ingrese lote de numeros positivos:" << endl;
    int val;
    bool continuar = true;
    // numero de sublote que estoy procesando
    int sublote = -1;
    // subtotal dentro de ese sublote
    int subTotal = 0;
    // cantidad de numeros dentro de ese sublote
    int subCantidad = 0;
    // minimo del sublote
    int minSub = std::numeric_limits<int>::max();
    //int cantidadDeLotes = 0;
    int mayorGeneral = std::numeric_limits<int>::min();

    bool encontreMax = false;
    int nroDeLoteMayor;
    int posRelativaMayor;

    while (continuar){
        cin >> val;
        if (val < 0){
            continuar = false;
            if (sublote == -1)
                cout << "No se ingresaron numeros." << endl;
            continue;
        }
        if (val == 0) {
            if (subCantidad !=0){
                cout << "Promedio del sublote " << sublote << ": " << subTotal/subCantidad << endl;
                cout << "Valor minimo del sublote " << sublote << ": " << minSub << endl;
            }
            else
                cout << "Sublote vacio." << endl;
            subTotal = 0;
            subCantidad = 0;
            minSub = std::numeric_limits<int>::max();
            sublote++;
            continue;
        }
        if (sublote == -1)
            sublote++;
        subCantidad++;
        subTotal += val;
        if (val < minSub){
            minSub = val;
        }
        if (val > mayorGeneral){
            encontreMax = true;
            mayorGeneral = val;
            nroDeLoteMayor = sublote;
            posRelativaMayor = subCantidad - 1; // le resto uno para que las posiciones relativas sean 0 based.
        }
    }
    if ( sublote > -1){
        cout << "Sublotes procesados: " << sublote + 1 << endl;
        if (encontreMax)
            cout << "Valor maximo encontrado en el sublote " << nroDeLoteMayor << " en la posicion " << posRelativaMayor
                << endl;
    }

    return 0;
}

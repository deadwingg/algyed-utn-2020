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
 *
 * Las posiciones de sublotes y valores son zero-based
 * Ademas asumimos que la entrada son valores numericos validos
 */
#include <iostream>
#include <limits>
using namespace std;
int main() {
    cout << "Ingrese lote de numeros positivos:" << endl;
    int val;
    bool continuar = true;
    // numero de sublote que estoy procesando, 0 indica que no se ingreso ningun valor
    int sublote = 0;
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
        // si el numero es menor a 0 termuno el ciclo seteando el flag a falso
        if (val < 0){
            continuar = false;
            // si no se ingreso ningun numero lo informo
            if (sublote == 0)
                cout << "No se ingresaron numeros." << endl;
            continue;
        }
        // si llegue al fin del sublote
        if (val == 0) {
            // si hubo numeros realizo los calculos para la informacion y reinicializo las variables
            // que hacen el calculo interno por sublote
            if (subCantidad !=0){
                cout << "Promedio del sublote " << sublote << ": " << subTotal/subCantidad << endl;
                cout << "Valor minimo del sublote " << sublote << ": " << minSub << endl;
                sublote++;
                subTotal = 0;
                subCantidad = 0;
                minSub = std::numeric_limits<int>::max();
                continue;
            } // si no se ingreso ningun numero lo informo y paso al siguiente sublote
            else{
                cout << "Sublote" << sublote++ << " vacio." << endl;
                continue;
            }
        }
        // si llegue a este punto tengo un valor positivo para el sublote.
        subCantidad++;
        subTotal += val;
        // actualizo el minimo de sublote si encontre uno
        if (val < minSub){
            minSub = val;
        }
        // si encontre un maximo general seteo el flag y guardo en aux los valores del maximo y su posicion relativa
        if (val > mayorGeneral){
            encontreMax = true;
            mayorGeneral = val;
            nroDeLoteMayor = sublote;
            posRelativaMayor = subCantidad - 1; // le resto uno para que las posiciones relativas sean 0 based.
        }
    }
    // ya fuera del ciclo  informo los sublotes procesados y si encontre un valor maximo tambien lo informo
    if ( sublote > 0){
        cout << "Sublotes procesados: " << sublote << endl;
        if (encontreMax)
            cout << "Valor maximo: " << mayorGeneral << " encontrado en el sublote " << nroDeLoteMayor << " en la posicion " << posRelativaMayor
                << endl;
    }

    return 0;
}

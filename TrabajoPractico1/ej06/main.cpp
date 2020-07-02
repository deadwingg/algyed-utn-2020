/*
 * Dadas dos fechas informar cual es la más reciente. Determine datos de entrada y
 * las leyendas a informar de acuerdo al proceso solicitado.
 *
 * Se considerara como fecha mas reciente la fecha que sea posterior.
 * Como entrada tomamos un numero de 8 digitos en fomrato AAAAMMDD
 */
#include <iostream>
using namespace std;
int main() {
    int fecha1;
    int fecha2;

    cout << "Ingrese primer fecha en formato AAAAMMDD";
    cin >> fecha1;
    cout << "Ingrese segunda fecha en formato AAAAMMDD";
    cin >> fecha2;

    cout << ((fecha1 > fecha2) ? "La primer fecha es mas reciente" : "La segunda fecha es mas reciente");
}

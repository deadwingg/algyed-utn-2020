
/*
/////////////////////////////////////////////////////////
Ejercicio 2:
 Dado un numero real que representa el importe de una compra
 informar las posibles formas de pago, segùn la siguiente tabla
 1 cuota
 2 cuotas (3% de recargo)       total
 3 cuotas (40% de recargo)      total
/////////////////////////////////////////////////////////
*/
#include <iostream>
using namespace std;
int main() {
    double precioDeLista;
    //auxiliares para calculo
    double precioEn2Cuotas;
    double precioEn3Cuotas;
    cout << "Ingrese precio de lista:";
    cin >> precioDeLista;

    precioEn2Cuotas = precioDeLista * 1.03;
    precioEn3Cuotas = precioDeLista * 1.4;

    cout << "1 cuota:  " << precioDeLista << endl;
    cout << "2 cuotas: " << precioEn2Cuotas / 2 << "\ttotal:\t" << precioEn2Cuotas << endl;
    cout << "3 cuotas: " << precioEn3Cuotas / 3 << "\ttotal:\t" << precioEn3Cuotas << endl;

    return 0;
}

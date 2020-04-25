/*
 * Dado un conjunto de triángulos representados por sus lados L1, L2, L3 que
 * finaliza con un triángulo con un lado nulo, determinar e imprimir la cantidad de triángulos
 * equiláteros, isósceles y escálenos.
 *
 * Para la solucion asumimos que los datos ingresados son triangulos validos y que al ingresar un triangulo
 * con un lado nulo aun asi se ingresaran los 2 restantes.
 */
#include <iostream>
using namespace std;
int main() {
    // numero de triangulos por tipo
    int escalenos = 0;
    int isosceles = 0;
    int equilateros = 0;
    //variables por lados
    int a, b, c;
    //cantidades de lados iguales
    int paresDeLadosIguales = 0;

    cout << "Ingrese lados separados por enter. Ingrese un triangulo con alguno de sus lados nulos para salir.\n";

    while (true){
        //ingreso terna y
        cin >> a;
        cin >> b;
        cin >> c;
        if(a == 0 || b == 0 || c == 0)
            break;

        if (a == b)
            paresDeLadosIguales++;
        if (b == c)
            paresDeLadosIguales++;
        if (c == a)
            paresDeLadosIguales++;

        switch (paresDeLadosIguales) {
            case 0:
                escalenos++;
                break;
            case 1:
                isosceles++;
                break;
            case 3:
                equilateros++;
                break;
        }
        // reinicio variable de cuenta
        paresDeLadosIguales = 0;
    }
    cout << "Fueron ingresados:\nEscalenos:" << escalenos << "\nIsosceles: "
        << isosceles << "\nEquilateros: "
        << equilateros;
    return 0;
}
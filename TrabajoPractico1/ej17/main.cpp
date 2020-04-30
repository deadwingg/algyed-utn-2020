/*
 * Dados N valores informar el mayor, el menor y en que posición del conjunto
 * fueron ingresados.
 */
#include <iostream>
#include <limits>

using namespace std;
int main() {
    // cantidad de elementos y valor actual
    double val;
    int n;

    double mayor = std::numeric_limits<double>::min();
    int indexMayor = 0;

    double menor = std::numeric_limits<double>::max();
    int indexMenor = 0;

    cout << "Ingrese cantidad de elementos:";
    cin >> n;
    cout << "Ingrese elementos:";

    for (int i = 0; i < n; i++){
        cin >> val;
        if (val > mayor){
            mayor = val;
            indexMayor = i;
        }
        if (val < menor){
            menor = val;
            indexMenor = i;
        }
    }

    cout << "El numero mayor es: " << mayor << " y fue insertado en la posicion: " << indexMayor << endl;
    cout << "El numero menor es: " << menor << " y fue insertado en la posicion: " << indexMenor << endl;
    return 0;
}
/*
 * Informar los primeros 100 números naturales y su sumatoria.
 *
 * En la solucion imprimi los numeros en una matriz para mejorar la visibilidad,
 * si es incorrecto se puede eliminar facilmente
 */
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int sum = 0;

    while (i < 101){
        sum += i;
        cout << i << "\t";
        if (i % 10 == 0)
            cout << endl;
        i++;
    }
    std::cout << "Sumatoria: " << sum;
    return 0;
}

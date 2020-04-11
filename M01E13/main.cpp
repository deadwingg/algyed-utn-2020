#include <iostream>
using namespace std;

int main() {
    int numero = 9876;

    int quintaParte = numero / 5;
    int resto = numero % 5;
    int quintaDeLaQuinta = quintaParte / 5;

    cout << "Quinta parte: " << quintaParte << "\tResto: " << resto
        << "\tQuinta parte de la quinta parte: " << quintaDeLaQuinta << endl;
    return 0;
}

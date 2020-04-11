#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 10; i++){
        int cuadrado = i * i;
        int cubo = cuadrado * i;
        cout << "Numero: " << i;
        cout << "\tCuadrado:" << cuadrado << "\tCubo:" << cubo << endl;
    }
    return 0;
}

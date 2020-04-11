#include <iostream>
#include <limits>


using namespace std;

int main() {
    int valores[3] = {-5, -5, -6};
    int mayor = std::numeric_limits<int>::min();
    int menor = std::numeric_limits<int>::max();

    for (int i = 0; i < 3; ++i) {
        int val = valores[i];
        if (val < menor)
            menor = val;
        if (val > mayor)
            mayor = val;
    }

    cout << "Mayor de los numeros: " << mayor << endl;
    cout << "Menor de los numeros: " << menor << endl;
}

#include <iostream>
using namespace std;
int main() {
    int m = 3;
    int n = 18988;
    int cantMultiplos = 0;

    for (int i = 1; i <= n; ++i) {
        if (i % m == 0)
            cantMultiplos++;
    }
    cout << "Hay " << cantMultiplos << " multiplos de " << m << " entre 1 y " << n << "." << endl;
    return 0;
}

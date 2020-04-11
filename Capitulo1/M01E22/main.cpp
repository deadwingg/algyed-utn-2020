#include <iostream>
using namespace std;
int main() {
    int conjunto[7] = {99, 12, -45, 8, 1006, 0, -88};

    int mayoresDe45 = 0;

    int sumaMenores = 0;
    double promMayores = 0;

    for (int i = 0; i < 7; ++i) {
        int val = conjunto[i];
        if (val > 45){
            mayoresDe45++;
            promMayores += val;
        }
        if (val < -10){
            sumaMenores += val;
        }
    }
    promMayores /= (double) mayoresDe45;
    cout << "El promedio de los mayores a 45 es: " << promMayores << endl;
    cout << "La suma de los menores a -10 es: " << sumaMenores << endl;
    return 0;
}

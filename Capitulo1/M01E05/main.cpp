#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;
int main() {
    double r = 0;
    cout << "Ingrese radio: ";
    cin >> r;
    double circunferencia = 2 * M_PI * r;
    double diametro = 2 * r;
    double area = M_PI * r * r;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Diametro: " << diametro << endl;
    cout << "Area: " << area << endl;
    return 0;
}

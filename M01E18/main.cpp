#include <iostream>
using namespace std;

int main() {
    //asumiendo que el triangulo es valido
    int triangulo[3] = {3, 3, 9};

    int a = triangulo[0];
    int b = triangulo[1];
    int c = triangulo[2];

    bool isTriangulo = a + b > c && a + c > b && c + b > a;

    if (isTriangulo == false){
        cout << "No es un triangulo." << endl;
        return 1;
    }

    int ladosIguales = 0;

    if (a == b)
        ladosIguales++;
    if (b == c)
        ladosIguales++;
    if (c == a)
        ladosIguales++;

    switch (ladosIguales) {
        case 0:
            cout << "El triangulo es escaleno.";
            break;
        case 1:
            cout << "El triangulo es isosceles.";
            break;
        case 3:
            cout << "El triangulo es equilatero.";
            break;
    }
    return 0;
}

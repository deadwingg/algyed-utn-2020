#include <iostream>
using namespace std;

int main() {
    char numeroCadena[6];
    int numero = 0;
    cout << "Ingrese numero entero de 5 digitos";
    cin >> numero;
    int fifth = numero % 10;
    numero /= 10;
    int fourth = numero % 10;
    numero /= 10;
    int third = numero % 10;
    numero /= 10;
    int second = numero % 10;
    numero /= 10;
    int first = numero;
    
    cout << "Cifras del numero: " << endl;
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;
    cout << fourth << endl;
    cout << fifth << endl; 
    return 0;
}

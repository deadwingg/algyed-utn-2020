/*
 * Dado un conjunto de Nombres y Fechas de nacimientos (AAAAMMDD), que
 * finaliza con un Nombre = ‘FIN’, informar el nombre de la persona con mayor edad
 * y el de la más joven.
 */
#include <iostream>
#include <limits>

#define MAX_NAME_LENGTH 10

using namespace std;

int main() {
    int nacimiento;
    char nombre[MAX_NAME_LENGTH] = {0};

    int mayor = std::numeric_limits<int>::max();
    char nombreMayor[MAX_NAME_LENGTH] = {0};
    int menor = std::numeric_limits<int>::min();
    char nombreMenor[MAX_NAME_LENGTH] = {0};


    do {
        cout << "Ingrese nombre:";
        cin >> nombre;
        if (nombre[0] == 'F' && nombre[1] == 'I' && nombre[2] == 'N'){
            break;
        }
        cout << "Ingrese fecha de nacimiento:";
        cin >> nacimiento;
        if (nacimiento < mayor) {
            mayor = nacimiento;
            for (int i = 0; i < MAX_NAME_LENGTH; i++){
                nombreMayor[i] = nombre[i];
            }
        }
        if (nacimiento > menor) {
            menor = nacimiento;
            for (int j = 0; j < MAX_NAME_LENGTH; j++){
                nombreMenor[j] = nombre[j];
            }
        }
    } while (true);

    cout << "El mayor es: " << nombreMayor  << endl;
    cout << "El menor es: " << nombreMenor  << endl;
    return 0;
}

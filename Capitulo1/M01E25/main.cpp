#include <iostream>
#include <limits>

using namespace std;
int main() {
    int conjunto[20]{843886, 925066, 478549, 966267, 482246, 259828, 951238, 556539, 627733,
                     774345, 999696, 331733, 420307, 607089, 763711, 13626, 367160, 921924,
                     88487, 316524};

    int mayor = std::numeric_limits<int>::min();
    int indexMayor = 0;

    int menor = std::numeric_limits<int>::max();
    int indexMenor = 0;


    for (int i = 0; i < 20; i++){
        int val = conjunto[i];
        if (val > mayor){
            mayor = val;
            indexMayor = i;
        }
        if (val < menor){
            menor = val;
            indexMenor = i;
        }
    }

    cout << "El numero mayor es: " << mayor << " y fue insertado en la posicion: " << indexMayor << endl;
    cout << "El numero menor es: " << menor << " y fue insertado en la posicion: " << indexMenor << endl;
    return 0;
}

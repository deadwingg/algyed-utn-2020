#include <iostream>
#include <limits>

using namespace std;
int main() {
    int conjunto[20]{77682, 93009, 185746, 212613, 342870, 390582, 421965, 435936,
                     438054, 544402, 722074, 730996, 758190, 835614, 853995, 856862,
                     932944, 949423, 971311, 984936};

    int mayor = std::numeric_limits<int>::min();
    int index = 0;

    for (int i = 0; i < 20; i++){
        int val = conjunto[i];
        if (val > mayor){
            mayor = val;
            index = i;
        }
    }

    cout << "El numero mayor es: " << mayor << " y fue insertado en la posicion: " << index << endl;
    return 0;
}

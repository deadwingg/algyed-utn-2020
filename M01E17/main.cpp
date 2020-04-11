#include <iostream>
using namespace std;
int main() {
    int dupla[2] = {02, 2019};
    int dias = 0;
    switch (dupla[0]) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dias = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dias = 30;
            break;
        case 2:
            if (dupla[1] % 4 == 0)
                dias = 29;
            else
                dias = 28;
            break;
    }
    cout << "El mes " << dupla[0] << "/" << dupla[1] << " tiene " << dias << " dias.";
    return 0;
}

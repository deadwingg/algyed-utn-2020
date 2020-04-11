//
// Created by gomez on 4/11/2020.
//

#include <iostream>
using namespace std;

int main() {
    int persona1[3] = {1994, 04, 11};
    int persona2[3] = {1994, 04, 11};

    int mayor = 0;
    for (int i = 0; i < 3; ++i) {
        int p1 = persona1[i];
        int p2 = persona2[i];
        if (p1 == p2)
            continue;
        mayor = (p1 < p2) ? 1 : 2;
        break;
    }

    if (mayor == 0){
        cout << "Las personas tiene la misma edad" << endl;
        return 0;
    }
    cout << "La persona mayor es: Persona " << mayor;
    return 0;
}

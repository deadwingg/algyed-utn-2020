/*
 * En un torneo de fútbol participan K equipos. El torneo se juega con el sistema
 * de todos contra todos. Por cada partido disputado por un equipo se dispone de la siguiente
 * información :
 *      a) Nro. de equipo,
 *      b) Código del resultado ('P'= Perdido, 'E'= Empatado, 'G'= Ganado).
 * Se arma un lote de datos con todos los resultados del torneo, agrupados por Nro. de equipo.
 * Desarrollar el programa que imprima:
 *      1) Por cada equipo, su número y el puntaje total que obtuvo (suma 3 si gana, y 1 si
 *      empata).
 *      2) Nro. de equipo que totalizó la menor cantidad de puntos. (hay solo uno)
 *
 *      suponemos que los datos de entrada son en formato
 *      <cantidad de equipos (k)>
 *      <k veces, por cada equipo>
 *          <k resultados>
 *
 *
 */
#include <iostream>

using namespace  std;

int main() {
    cout << "Ingrese numero de equipos: " << endl;
    int total = 1;
    cin >> total;

    int equipos[total] = {0};;
    int i = 0;
    int j = 0;
    char resultado;
    // carga de datos
    while (i < total){
        cout << "Equipo " << i << "\n";
        while (j < total - 1){
            cout << "Ingrese resultado: ";
            cin >> resultado;
            switch (resultado) {
                case 'E':
                    equipos[i]++;
                    break;
                case 'G':
                    equipos[i] += 3;
                    break;
                case 'P':
                default:
                    break;
            }
            j++;
        }
        j = 0;
        i++;
    }

    int indexMenor = 0;
    int puntosMenor = equipos[0];

    for (int k = 0; k < total; ++k) {
        if(equipos[k] < puntosMenor){
            puntosMenor = equipos[k];
            indexMenor = k;
        }
        cout << "Equipo numero " << k + 1 << " Obtuvo " << equipos[k] << " puntos.\n";
    }
    cout << "El equipo con menos puntos fue el numero: " << indexMenor + 1 << ".\n";
    return 0;
}

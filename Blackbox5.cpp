#include <iostream>
using namespace std;

double calcularPromedio(int notas[], int cantidad) {
    double suma = 0;
    for (int i = 0; i < cantidad; i++) {
        suma += notas[i];
    }
    return suma / cantidad;
}

int main() {
    int notas[8];
    int cantidadAprobados = 0;
    int cantidadReprobados = 0;
    double promedio;

    for (int i = 0; i < 8; i++) {
        cout << "Ingrese la nota del estudiante " << i + 1 << ": ";
        cin >> notas[i];
        if (notas[i] >= 70) {
            cantidadAprobados++;
        } else {
            cantidadReprobados++;
        }
    }

    promedio = calcularPromedio(notas, 8);

    cout << "Cantidad de alumnos aprobados: " << cantidadAprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << cantidadReprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;

    return 0;
}
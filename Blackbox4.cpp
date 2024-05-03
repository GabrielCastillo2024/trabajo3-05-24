#include <iostream>
using namespace std;

double calcularPromedio(double notas[]) {
    double suma = 0;
    for (int i = 0; i < 10; i++) {
        suma += notas[i];
    }
    return suma / 10;
}

int main() {
    double notas[10];
    cout << "Ingrese la nota del estudiante 1: ";
    cin >> notas[0];
    cout << "Ingrese la nota del estudiante 2: ";
    cin >> notas[1];
    cout << "Ingrese la nota del estudiante 3: ";
    cin >> notas[2];
    cout << "Ingrese la nota del estudiante 4: ";
    cin >> notas[3];
    cout << "Ingrese la nota del estudiante 5: ";
    cin >> notas[4];
    cout << "Ingrese la nota del estudiante 6: ";
    cin >> notas[5];
    cout << "Ingrese la nota del estudiante 7: ";
    cin >> notas[6];
    cout << "Ingrese la nota del estudiante 8: ";
    cin >> notas[7];
    cout << "Ingrese la nota del estudiante 9: ";
    cin >> notas[8];
    cout << "Ingrese la nota del estudiante 10: ";
    cin >> notas[9];
    cout << "El promedio general de la seccion es: " << calcularPromedio(notas) << endl;
    return 0;
}
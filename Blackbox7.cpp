#include <iostream>
using namespace std;

void pedirVector(int vector[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        cout << "Ingrese el valor en la posicion " << i << ": ";
        cin >> vector[i];
    }
}

void sumarVectores(int vector1[], int vector2[], int resultado[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        resultado[i] = vector1[i] + vector2[i];
    }
}

void mostrarVector(int vector[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    int longitud;
    int vector1[100];
    int vector2[100];
    int resultado[100];

    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    pedirVector(vector1, longitud);
    pedirVector(vector2, longitud);

    sumarVectores(vector1, vector2, resultado, longitud);

    cout << "La suma de los vectores es: ";
    mostrarVector(resultado, longitud);

    return 0;
}
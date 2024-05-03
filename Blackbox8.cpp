#include <iostream>
using namespace std;

void pedirVector(int vector[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        cout << "Ingrese el valor en la posicion " << i << ": ";
        cin >> vector[i];
    }
}

int calcularProductoPunto(int vector1[], int vector2[], int longitud) {
    int productoPunto = 0;
    for (int i = 0; i < longitud; i++) {
        productoPunto += vector1[i] * vector2[i];
    }
    return productoPunto;
}

void mostrarResultado(int productoPunto) {
    cout << "El producto punto de los vectores es: " << productoPunto << endl;
}

int main() {
    int longitud;
    int vector1[100];
    int vector2[100];

    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    pedirVector(vector1, longitud);
    pedirVector(vector2, longitud);

    int productoPunto = calcularProductoPunto(vector1, vector2, longitud);

    mostrarResultado(productoPunto);

    return 0;
}
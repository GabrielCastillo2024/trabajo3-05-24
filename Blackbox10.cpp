#include <iostream>
using namespace std;

void pedirMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Ingrese el valor en la posicion " << i << ", " << j << ": ";
            cin >> matriz[i][j];
        }
    }
}

void transponerMatriz(int matriz[][10], int matrizTranspuesta[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][10], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int filas, columnas;
    int matriz[10][10];
    int matrizTranspuesta[10][10];

    cout << "Ingrese las dimensiones de la matriz (filas y columnas): ";
    cin >> filas >> columnas;

    cout << "Ingrese los valores de la matriz:" << endl;
    pedirMatriz(matriz, filas, columnas);

    transponerMatriz(matriz, matrizTranspuesta, filas, columnas);

    cout << "La matriz transpuesta es:" << endl;
    mostrarMatriz(matrizTranspuesta, columnas, filas);

    return 0;
}
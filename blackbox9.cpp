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

void multiplicarMatrices(int matriz1[][10], int matriz2[][10], int resultado[][10], int filas1, int columnas1, int filas2, int columnas2) {
    for (int i = 0; i < filas1; i++) {
        for (int j = 0; j < columnas2; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < columnas1; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
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
    int filas1, columnas1, filas2, columnas2;
    int matriz1[10][10];
    int matriz2[10][10];
    int resultado[10][10];

    cout << "Ingrese las dimensiones de la primera matriz (filas y columnas): ";
    cin >> filas1 >> columnas1;

    cout << "Ingrese los valores de la primera matriz:" << endl;
    pedirMatriz(matriz1, filas1, columnas1);

    cout << "Ingrese las dimensiones de la segunda matriz (filas y columnas): ";
    cin >> filas2 >> columnas2;

    if (columnas1 != filas2) {
        cout << "Las matrices no son compatibles para la multiplicacion." << endl;
        return 0;
    }

    cout << "Ingrese los valores de la segunda matriz:" << endl;
    pedirMatriz(matriz2, filas2, columnas2);

    multiplicarMatrices(matriz1, matriz2, resultado, filas1, columnas1, filas2, columnas2);

    cout << "La matriz resultante es:" << endl;
    mostrarMatriz(resultado, filas1, columnas2);

    return 0;
}
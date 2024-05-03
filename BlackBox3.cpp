#include <iostream>
using namespace std;

int calcularSumaCuadrados(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i * i;
    }
    return suma;
}

int main() {
    int n = 100;
    cout << "La suma de los cuadrados de los números entre 1 y " << n << " es: " << calcularSumaCuadrados(n) << endl;
    return 0;
}
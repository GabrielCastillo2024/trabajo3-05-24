#include <iostream>
using namespace std;

int calcularSuma(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int n;
    cout << "Ingrese un numero natural: ";
    cin >> n;
    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << calcularSuma(n) << endl;
    return 0;
}
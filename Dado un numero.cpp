#include <iostream>
using namespace std;

int main() {
    int n; // número natural
    cout << "Ingrese un numero natural: ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i; 
    }

    cout << "La suma de los numeros naturales es: " << n << " es: " << suma << endl;

    return 0;
}
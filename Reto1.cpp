#include <iostream>
using namespace std;

int main() {
    int N, numero = 1, suma = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    while (numero <= N) {
        suma = suma + numero;
        numero++;
    }

    cout << "La suma es: " << suma << endl;

    return 0;
}

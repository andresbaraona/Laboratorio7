#include <iostream>
using namespace std;

int main() {
    int numero, contador = 1;

    cout << "Ingrese un numero del 1 al 10: ";
    cin >> numero;

    while (contador <= 10) {
        cout << numero << " x " << contador << " = " << numero * contador << endl;
        contador++;
    }

    return 0;
}
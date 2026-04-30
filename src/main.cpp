#include <iostream>
#include "math.h"

using namespace std;

int main() {
    double x;

    cout << "Ingrese un numero: ";
    cin >> x;

    cout << "Valor absoluto: " << ValorAbsoluto(x) << endl;
    cout << "Raiz cuadrada: " << raizCuadrada(x) << endl;
    cout << "Seno: " << seno(x) << endl;
    cout << "Coseno: " << coseno(x) << endl;
    cout << "Exponencial e^x: " << exponencial(x) << endl;

    return 0;
}
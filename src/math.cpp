#include "math.h"

double ValorAbsoluto(double x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

double Potencia(double x, int y) {
    double resultado = 1.0;
    for (int i = 0; i < y; i++) {
        resultado *= x;
    }
    return resultado;
}

double factorial(int n) {
    if (n < 0) {
        return -1; // Error: factorial no está definido para números negativos
    } else if (n == 0 || n == 1) {
        return 1; // factorial de 0 y 1 es 1
    } else {
        double resultado = 1.0;
        for (int i = 2; i <= n; i++) {
            resultado *= i;
        }
        return resultado;
    }
}

double raizCuadrada(double x) {
    if (x < 0) {
        return -1; // Error: raíz cuadrada no está definida para números negativos
    } else {
        double resultado = x;
        double raiz = 0.5 * (resultado + x / resultado);
        while (ValorAbsoluto(raiz - resultado) >= 0.00001) {
            resultado = raiz;
            raiz = 0.5 * (resultado + x / resultado);
        }
        return raiz;
    }
}

double seno(double x) {
    double suma = 0;
    int n = 10; // número de términos

    for (int i = 0; i < n; i++) {
        double termino = Potencia(-1, i) * Potencia(x, 2*i + 1) / factorial(2*i + 1);
        suma += termino;
    }
    return suma;
}

double coseno(double x) {
    double suma = 0;
    int n = 10;

    for (int i = 0; i < n; i++) {
        double termino = Potencia(-1, i) * Potencia(x, 2*i) / factorial(2*i);
        suma += termino;
    }
    return suma;
}

double exponencial(double x) {
    double suma = 0;
    int n = 10;

    for (int i = 0; i < n; i++) {
        suma += Potencia(x, i) / factorial(i);
    }
    return suma;
}
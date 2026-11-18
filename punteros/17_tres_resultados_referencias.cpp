#include <iostream>

using namespace std;

// Las referencias de salida modifican s, p y m en main().
void analizar(int a, int b,
              int& suma, int& producto, int& mayor) {

    cout << "\nDentro de analizar():" << endl;
    cout << "Valores recibidos: a = " << a
         << ", b = " << b << endl;

    // Se asignan resultados directamente a las variables originales.
    suma = a + b;
    producto = a * b;
    mayor = (a > b) ? a : b;

    cout << "Suma calculada: " << suma << endl;
    cout << "Producto calculado: " << producto << endl;
    cout << "Mayor calculado: " << mayor << endl;
}

int main() {

    int a = 4;
    int b = 7;

    int s = 0;
    int p = 0;
    int m = 0;

    cout << "Antes de llamar a analizar():" << endl;
    cout << "s = " << s << ", p = " << p
         << ", m = " << m << endl;

    // Los resultados se reciben por referencia, no por puntero.
    analizar(a, b, s, p, m);

    cout << "\nDespues de llamar a analizar():" << endl;
    cout << "Suma: " << s << endl;
    cout << "Producto: " << p << endl;
    cout << "Mayor: " << m << endl;

    return 0;
}

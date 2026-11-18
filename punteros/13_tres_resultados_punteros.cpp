#include <iostream>

using namespace std;

// Las direcciones recibidas indican donde guardar los resultados.
void analizar(int a, int b,
              int* suma, int* producto, int* mayor) {

    cout << "\nDentro de analizar():" << endl;
    cout << "Valores recibidos: a = " << a
         << ", b = " << b << endl;

    // Cada *puntero accede a la variable de salida en main().
    *suma = a + b;
    *producto = a * b;
    *mayor = (a > b) ? a : b;

    // Se imprimen los valores de los objetos apuntados.
    cout << "Suma calculada: " << *suma << endl;
    cout << "Producto calculado: " << *producto << endl;
    cout << "Mayor calculado: " << *mayor << endl;
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

    // Se envian los numeros por valor y las direcciones de salida.
    analizar(a, b, &s, &p, &m);

    cout << "\nDespues de llamar a analizar():" << endl;
    cout << "Suma: " << s << endl;
    cout << "Producto: " << p << endl;
    cout << "Mayor: " << m << endl;

    return 0;
}

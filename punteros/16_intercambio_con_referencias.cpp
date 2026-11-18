#include <iostream>

using namespace std;

// a y b son referencias a primero y segundo, respectivamente.
void intercambiar(int& a, int& b) {

    cout << "\nDentro de intercambiar():" << endl;
    cout << "Valores recibidos: " << a << " y " << b << endl;

    // Se modifican las variables originales, sin punteros explicitos.
    int temporal = a;
    a = b;
    b = temporal;

    cout << "Valores despues del intercambio: "
         << a << " y " << b << endl;
}

int main() {

    int primero = 12;
    int segundo = 45;

    cout << "Antes de llamar a intercambiar():" << endl;
    cout << "primero = " << primero << endl;
    cout << "segundo = " << segundo << endl;

    // Las variables se pasan por referencia.
    intercambiar(primero, segundo);

    cout << "\nDespues de llamar a intercambiar():" << endl;
    cout << "primero = " << primero << endl;
    cout << "segundo = " << segundo << endl;

    return 0;
}

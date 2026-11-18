#include <iostream>

using namespace std;

// Los parametros a y b son copias de las variables originales.
void intercambiar(int a, int b) {

    cout << "\nDentro de intercambiar():" << endl;
    cout << "Valores recibidos: " << a << " y " << b << endl;

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

    // El intercambio ocurre solo entre las copias locales.
    intercambiar(primero, segundo);

    cout << "\nDespues de llamar a intercambiar():" << endl;
    cout << "primero = " << primero << endl;
    cout << "segundo = " << segundo << endl;

    return 0;
}

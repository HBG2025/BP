#include <iostream>

using namespace std;

void cambiar(int x, int nuevoValor) {

    cout << "Dentro de cambiar():" << endl;
    cout << "Valor recibido en x: " << x << endl;

    // x es una copia: cambiarla no modifica numero en main().
    x = nuevoValor;

    cout << "Valor de x despues del cambio: " << x << endl;
}

int main() {

    int numero = 5;

    cout << "Antes de llamar a cambiar():" << endl;
    cout << "numero = " << numero << endl;

    // Se envia el valor de numero y el nuevo valor deseado.
    cambiar(numero, 100);

    cout << "\nDespues de llamar a cambiar():" << endl;
    cout << "numero = " << numero << endl;

    return 0;
}

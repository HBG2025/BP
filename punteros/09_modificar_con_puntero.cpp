#include <iostream>

using namespace std;

// destino recibe una copia de la direccion de la variable original.
void cambiar(int* destino, int nuevoValor) {

    if (destino != nullptr) {
        cout << "Dentro de cambiar():" << endl;
        cout << "Direccion recibida: " << destino << endl;
        cout << "Valor anterior: " << *destino << endl;

        // Se modifica la variable original, no una copia de su valor.
        *destino = nuevoValor;

        cout << "Valor nuevo: " << *destino << endl;
    }
}

int main() {

    int numero = 5;

    cout << "Antes de llamar a cambiar():" << endl;
    cout << "numero = " << numero << endl;

    // Enviamos la direccion de numero y el nuevo valor.
    cambiar(&numero, 100);

    cout << "\nDespues de llamar a cambiar():" << endl;
    cout << "numero = " << numero << endl;

    return 0;
}

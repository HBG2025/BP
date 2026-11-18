#include <iostream>

using namespace std;

// dato hace referencia a la variable recibida desde main().
// Esta sintaxis es propia de C++.
void cambiar(int& dato, int nuevoValor) {

    cout << "\nDentro de cambiar():" << endl;
    cout << "Valor recibido: " << dato << endl;

    // Se modifica la variable original mediante la referencia.
    dato = nuevoValor;

    cout << "Valor despues del cambio: " << dato << endl;
}

int main() {

    int numero = 5;

    cout << "Antes de llamar a cambiar():" << endl;
    cout << "numero = " << numero << endl;

    // No se escribe &numero: el parametro ya es una referencia.
    cambiar(numero, 100);

    cout << "\nDespues de llamar a cambiar():" << endl;
    cout << "numero = " << numero << endl;

    return 0;
}

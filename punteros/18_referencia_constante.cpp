#include <iostream>

using namespace std;

// const impide modificar el entero mediante esta referencia.
void mostrar(const int& dato) {

    cout << "\nDentro de mostrar():" << endl;
    cout << "Valor recibido mediante la referencia: "
         << dato << endl;
    cout << "Direccion del objeto referenciado: "
         << &dato << endl;

    // Esta instruccion no compilaria:
    // dato = 100;
}

int main() {

    int numero = 25;

    cout << "Antes de llamar a mostrar():" << endl;
    cout << "Valor de numero: " << numero << endl;
    cout << "Direccion de numero: " << &numero << endl;

    // Se consulta la variable original sin copiar el entero.
    mostrar(numero);

    cout << "\nDespues de llamar a mostrar():" << endl;
    cout << "Valor de numero: " << numero << endl;

    return 0;
}

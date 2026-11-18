#include <iostream>

using namespace std;

int main() {

    int edad = 20;

    cout << "Valor: " << edad << endl;

    // El operador & obtiene la direccion de memoria de la variable.
    // Esta direccion suele mostrarse en hexadecimal.
    cout << "Direccion: " << &edad << endl;

    return 0;
}

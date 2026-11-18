#include <iostream>

using namespace std;

int main() {

    int numero = 35;

    // p almacena la direccion de memoria de numero.
    int* p = &numero;

    // *p accede al valor del objeto apuntado.
    cout << "Valor inicial de numero: " << numero << endl;
    cout << "Valor obtenido mediante *p: " << *p << endl;

    // Se modifica numero indirectamente, sin cambiar la direccion de p.
    *p = 80;

    cout << "\nDespues de ejecutar *p = 80:" << endl;
    cout << "Valor de numero: " << numero << endl;
    cout << "Valor obtenido mediante *p: " << *p << endl;

    return 0;
}

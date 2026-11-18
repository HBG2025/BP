#include <iostream>

using namespace std;

int main() {

    int x = 7;

    // p almacena la direccion de x y tiene una direccion propia.
    int* p = &x;

    cout << "Direccion de la variable x (&x): " << &x << endl;
    cout << "Direccion almacenada en el puntero p: " << p << endl;

    // &p obtiene la direccion del propio puntero.
    cout << "Direccion de memoria del puntero p (&p): " << &p << endl;

    return 0;
}

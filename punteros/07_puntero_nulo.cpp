#include <iostream>

using namespace std;

int main() {

    // nullptr indica que p no apunta a ningun objeto.
    int* p = nullptr;
    int x = 17;

    if (p == nullptr) {
        // La representacion impresa del puntero nulo depende del entorno.
        cout << "El puntero p es nulo (nullptr): " << p << endl;
    }

    // Ahora p apunta a x porque almacena su direccion.
    p = &x;

    // La comprobacion descarta nullptr; aqui sabemos que x existe.
    if (p != nullptr) {
        cout << "\nDespues de ejecutar p = &x:" << endl;
        cout << "Direccion almacenada en p: " << p << endl;
        cout << "Direccion de x (&x): " << &x << endl;
        cout << "Valor de x: " << x << endl;
        cout << "Valor obtenido mediante *p: " << *p << endl;
    }

    return 0;
}

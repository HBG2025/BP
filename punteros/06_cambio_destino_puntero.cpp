#include <iostream>

using namespace std;

int main() {

    int a = 10;
    int b = 20;

    // Inicialmente p apunta a a.
    int* p = &a;

    cout << "Valores iniciales:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Valor apuntado por p: " << *p << endl;

    // Cambiamos la direccion almacenada en p: ahora apunta a b.
    // Los valores de a y b no cambian por esta asignacion.
    p = &b;

    cout << "\nDespues de ejecutar p = &b:" << endl;
    cout << "Valor apuntado por p: " << *p << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // Como p apunta a b, *p = 50 modifica b y no a.
    *p = 50;

    cout << "\nDespues de ejecutar *p = 50:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "Valor apuntado por p: " << *p << endl;

    return 0;
}

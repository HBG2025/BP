#include <iostream>

using namespace std;

int main() {

    int a = 3;
    int b = 9;

    // En esta linea solo p es puntero; q es un entero ordinario.
    int* p = &a, q = 15;

    cout << "Valor de a: " << a << endl;
    cout << "Valor de q: " << q << endl;
    cout << "Direccion almacenada en p: " << p << endl;
    cout << "Valor apuntado por p: " << *p << endl;

    // Cada declarador de puntero necesita su propio asterisco.
    int *pa = &a, *pb = &b;

    cout << "\nDos punteros correctamente declarados:" << endl;
    cout << "Valor apuntado por pa: " << *pa << endl;
    cout << "Valor apuntado por pb: " << *pb << endl;

    return 0;
}

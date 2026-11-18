#include <iostream>

using namespace std;

int main() {

    int numero = 35;

    // p es un puntero a int que almacena la direccion de numero.
    int* p = &numero;

    cout << "numero: " << numero << endl;
    cout << "direccion de numero: " << &numero << endl;

    // p contiene la misma direccion que produce &numero.
    cout << "contenido de p: " << p << endl;

    return 0;
}

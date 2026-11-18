#include <iostream>

using namespace std;

int main() {

    int numero = 10;

    // Las referencias int& son propias de C++; no existen en C puro.
    // r es una referencia a la variable numero,
    // no una copia del valor almacenado en ella.
    int& r = numero;

    cout << "Valores iniciales:" << endl;
    cout << "numero = " << numero << endl;
    cout << "r = " << r << endl;

    // Modificamos la variable numero mediante su referencia.
    r = 50;

    cout << "\nDespues de ejecutar r = 50:" << endl;
    cout << "numero = " << numero << endl;
    cout << "r = " << r << endl;

    // &r obtiene la direccion del objeto referido: numero.
    cout << "\nDirecciones de memoria:" << endl;
    cout << "&numero = " << &numero << endl;
    cout << "&r = " << &r << endl;

    return 0;
}

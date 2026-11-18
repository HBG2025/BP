#include <iostream>

using namespace std;

// La funcion recibe las direcciones de las variables originales.
void intercambiar(int* a, int* b) {

    if (a == nullptr || b == nullptr) {
        return;
    }

    cout << "\nDentro de intercambiar():" << endl;
    cout << "Valores recibidos: " << *a << " y " << *b << endl;

    // Las desreferenciaciones modifican los objetos originales.
    int temporal = *a;
    *a = *b;
    *b = temporal;

    cout << "Valores despues del intercambio: "
         << *a << " y " << *b << endl;
}

int main() {

    int primero = 12;
    int segundo = 45;

    cout << "Antes de llamar a intercambiar():" << endl;
    cout << "primero = " << primero << endl;
    cout << "segundo = " << segundo << endl;

    intercambiar(&primero, &segundo);

    cout << "\nDespues de llamar a intercambiar():" << endl;
    cout << "primero = " << primero << endl;
    cout << "segundo = " << segundo << endl;

    return 0;
}

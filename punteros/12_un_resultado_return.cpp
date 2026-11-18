#include <iostream>

using namespace std;

// Esta funcion calcula tres enteros, pero retorna solo uno.
int analizar(int a, int b) {

    int suma = a + b;
    int producto = a * b;
    int mayor = (a > b) ? a : b;

    cout << "\nDentro de analizar():" << endl;
    cout << "Suma calculada: " << suma << endl;
    cout << "Producto calculado: " << producto << endl;
    cout << "Mayor calculado: " << mayor << endl;

    // El return entrega solamente el valor de suma.
    return suma;
}

int main() {

    int a = 4;
    int b = 7;

    int resultado = analizar(a, b);

    cout << "\nEn main():" << endl;
    cout << "Resultado recibido: " << resultado << endl;

    return 0;
}

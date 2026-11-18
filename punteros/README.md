# Ejemplos de punteros y referencias en C++

Esta carpeta contiene **18 programas independientes** para estudiar punteros y referencias en C++ de manera progresiva. Cada archivo tiene su propio `main()` y se compila por separado.

Los ejemplos corresponden a la secuencia desarrollada en clase. Se excluyen deliberadamente los arreglos y las estructuras, que se estudiarán en unidades independientes.

## Orden de estudio

### I. Fundamentos de punteros (1–7)
1. [Valor y dirección de una variable](./01_valor_y_direccion.cpp)
2. [Declaración e inicialización de un puntero](./02_declaracion_puntero.cpp)
3. [Acceso y modificación mediante *p](./03_desreferenciacion.cpp)
4. [Dirección del objeto y dirección del puntero](./04_direccion_del_puntero.cpp)
5. [Declaración de varios punteros](./05_declaracion_varios_punteros.cpp)
6. [Cambiar el destino de un puntero](./06_cambio_destino_puntero.cpp)
7. [Inicialización con nullptr](./07_puntero_nulo.cpp)

### II. Funciones: paso por valor y punteros (8–13)
8. [Función con paso por valor](./08_paso_por_valor.cpp)
9. [Modificar una variable desde una función con un puntero](./09_modificar_con_puntero.cpp)
10. [Intento de intercambio por valor](./10_intercambio_por_valor.cpp)
11. [Intercambio de variables con punteros](./11_intercambio_con_punteros.cpp)
12. [Varios cálculos, un solo valor de retorno](./12_un_resultado_return.cpp)
13. [Tres resultados mediante parámetros puntero](./13_tres_resultados_punteros.cpp)

### III. Referencias en C++ (14–18)
14. [Declaración y uso de una referencia](./14_referencia_basica.cpp)
15. [Paso de una variable por referencia a una función](./15_parametro_por_referencia.cpp)
16. [Intercambio mediante referencias](./16_intercambio_con_referencias.cpp)
17. [Tres resultados mediante referencias](./17_tres_resultados_referencias.cpp)
18. [Referencia constante const int&](./18_referencia_constante.cpp)

## Compilación

Desde una terminal con G++ instalado, por ejemplo:

```bash
g++ -std=c++17 -Wall -Wextra -pedantic 01_valor_y_direccion.cpp -o ejemplo
./ejemplo
```

Para otro programa, cambia el nombre del archivo `.cpp`. No compiles los 18 archivos juntos, porque cada uno define una función `main()`.

**Notas:** las direcciones impresas dependen de la ejecución y del sistema. `nullptr` no debe desreferenciarse. Las referencias (`int&`) son una característica de C++, no de C puro.

# Punteros y gestión de memoria en C

Material de apoyo para el estudio progresivo de punteros, memoria y programación procedural en C, con una práctica aplicada en Arduino.

## Secuencia sugerida de lectura

| Orden | Archivo | Descripción |
|---:|---|---|
| 1 | [`01_arquitectura_general_y_memoria_del_programa.pdf`](01_arquitectura_general_y_memoria_del_programa.pdf) | Base conceptual sobre computador, memoria RAM, programa almacenado, programa en ejecución, variables locales, funciones y relación entre código, datos y memoria. |
| 2 | [`02_punteros_en_c.pdf`](02_punteros_en_c.pdf) | Introducción a punteros en C: valor, dirección, operadores `&` y `*`, paso por valor, paso de direcciones, modificación indirecta, intercambio de variables y punteros como canales de salida. |
| 3 | [`03_practica_arduino_funciones_punteros_arreglos_led.pdf`](03_practica_arduino_funciones_punteros_arreglos_led.pdf) | Práctica de Arduino con potenciómetro y LED para integrar funciones, punteros, arreglos y salidas múltiples en un montaje físico sencillo. |

## Propósito

Estos documentos están pensados para acompañar el aprendizaje de programación en C desde una mirada práctica y gradual. La idea principal es que los punteros no se estudien como símbolos aislados, sino como una forma de razonar con variables, direcciones, funciones y memoria.

## Cómo usar este material

1. Leer primero la base conceptual de memoria y ejecución.
2. Practicar los ejemplos de punteros en C en un compilador local o en línea.
3. Realizar la práctica de Arduino para observar el uso de funciones, punteros y arreglos en un sistema físico.
4. Modificar los ejemplos de forma controlada: cambiar valores, agregar impresiones, variar condiciones y explicar los resultados obtenidos.

## Temas cubiertos

- Programa almacenado y programa en ejecución.
- RAM como memoria de trabajo.
- Variables, direcciones y datos.
- Modelo de ejecución en C.
- Función `main`, retorno y variables locales.
- Operadores `&` y `*`.
- Declaración y uso de punteros.
- Paso por valor y paso de direcciones.
- Punteros como canales de salida.
- Relación inicial entre punteros, arreglos y cadenas.
- Práctica con Arduino, potenciómetro, LED, funciones y arreglos.

## Nota

La gestión de memoria dinámica con `malloc`, `calloc`, `realloc` y `free` se trabaja como continuación natural de esta secuencia.

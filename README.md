# Calculadora Simple

Una calculadora de consola en C++ que realiza las cuatro operaciones básicas: suma, resta, multiplicación y división. Pensada como proyecto de aprendizaje, con el código organizado en archivos separados (declaraciones, implementación y punto de entrada).

## Estructura del proyecto

```
.
├── include/
│   └── calculadora.hh   # Declaraciones de las funciones de cálculo
├── src/
│   └── calculadora.cc   # Implementación de las operaciones
├── main.cc              # Punto de entrada e interfaz por consola
├── Makefile             # Reglas de compilación
└── README.md
```

## Requisitos

- Un compilador de C++ compatible con C++11 o superior (por ejemplo, `g++`).
- `make` (opcional, pero recomendado).

## Compilación y ejecución

Con `make`:

```bash
make (run)
```

Esto compila el proyecto y ejecuta automáticamente `main.exe`.

Manualmente, sin `make`:

```bash
g++ main.cc src/calculadora.cc -o main.exe
./main.exe
(Nombre de fichero .exe a elegir)
```

## Uso

Al ejecutar el programa se muestra un menú con las operaciones disponibles:

```
===============================================================
  Bienvenido a mi Mini-Calculadora simple!
===============================================================
  Operaciones disponibles:
    1. Suma
    2. Resta
    3. Multiplicación
    4. División
    0. Salir
===============================================================

Selecciona una opción:
```

Introduce el número de la operación deseada y, a continuación, los dos números con los que operar. Para dividir por cero se muestra un mensaje de error en lugar de realizar la operación. Para salir del programa, introduce `0`.

### Ejemplo

```
Selecciona una opción: 1
Introduce el primer número: 5
Introduce el segundo número: 3
  >> 5 + 3 = 8
```

## Notas

- Los operandos se leen como `long long`, por lo que admiten números enteros grandes.
- La opción de división también muestra el resto de la operación (`num1 % num2`).
- Cuando pida un número, *NO* introducir algún caracter que no sea un número válido, si lo haces, no funcionara

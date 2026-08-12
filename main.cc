#include <iostream>

#include "include/calculadora.hh"

using namespace std;

// Para el inicio
const string SEPARADOR(63, '=');

void mostrar_introduccion() {
    cout << SEPARADOR << endl;
    cout << "  Bienvenido a mi Mini-Calculadora simple!" << endl;
    cout << SEPARADOR << endl;
    cout << "  Operaciones disponibles:" << endl;
    cout << "    1. Suma" << endl;
    cout << "    2. Resta" << endl;
    cout << "    3. Multiplicación" << endl;
    cout << "    4. División" << endl;
    cout << "    0. Salir" << endl;
    cout << SEPARADOR << endl << endl;
}

void conseguir_numeros(long long& num1, long long& num2) {
    cout << "Introduce el primer número: ";
    cin >> num1;
    cout << "Introduce el segundo número: ";
    cin >> num2;

    return;
}

int main() {
    // Muestra información de bienvenida
    mostrar_introduccion();

    int seleccion;
    cout << "Selecciona una opción: ";

    long long num1, num2;

    while(cin >> seleccion) {
        if(seleccion == 0) {
            return 0;
        }
        else if(seleccion == 1) {
            conseguir_numeros(num1, num2);
            sumar(num1, num2);
        }
        else if(seleccion == 2) {
            conseguir_numeros(num1, num2);
            restar(num1, num2);
        }
        else if(seleccion == 3) {
            conseguir_numeros(num1, num2);
            multiplicar(num1, num2);
        }
        else if(seleccion == 4) {
            conseguir_numeros(num1, num2);
            if(num2 == 0) {
                cout << "Error, no se puede dividir por 0!" << endl;
            } else {
                dividir(num1, num2);
            }
        }
        else {
            cout << "Error, introduce una opción válida!" << endl;
        }
        cout << "Selecciona una opción: ";
    }

    return 0;
}
#include <iostream>

#include "include/calculadora.hh"

using namespace std;

void mostrar_introduccion() {
    cout << "/////////////////////////////////////////////////////////////" << endl;
    cout << "Bienvendio a mi Mini-Calculadora simple!" << endl;
    cout << "Esta calculadora permite hacer las siguentes operaciones: " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Para salir, introduce 0" << endl;
    cout << "/////////////////////////////////////////////////////////////" << endl;
}

void conseguir_numeros(long long& num1, long long& num2) {
    cout << "Introduce el primer numero: ";
    cin >> num1;
    cout << "Introduce el segundo numero: ";
    cin >> num2;

    return;
}

int main() {
    // Muestra informacion de bienvenida
    mostrar_introduccion();

    int seleccion;
    cout << "Selecciona una opcion: ";

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
            cout << "Error, introduce una opcion valida!" << endl;
        }
        cout << "Selecciona una opcion: ";
    }

    return 0;
}
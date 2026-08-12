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

int main() {
    // Muestra informacion de bienvenida
    mostrar_introduccion();

    int seleccion;
    cout << "Selecciona una opcion: ";

    bool salir = false;

    while(cin >> seleccion && not salir) {
        if(seleccion == 0) {
            salir = true;
        }
        else if(seleccion == 1) {

        }
        else if(seleccion == 2) {

        }
        else if(seleccion == 3) {

        }
        else if(seleccion == 4) {

        }
        else {
            
        }
    }

    return 0;
}
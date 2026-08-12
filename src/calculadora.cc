#include "../include/calculadora.hh"

#include <iostream>
#include <cmath>

using namespace std;


void sumar(long long num1, long long num2) {
    cout << "  >> " << num1 << " + " << num2 << " = " << num1 + num2 << endl;

    return;
}


void restar(long long num1, long long num2) {
    cout << "  >> " << num1 << " - " << num2 << " = " << num1 - num2 << endl;

    return;
}


void multiplicar(long long num1, long long num2) {
    cout << "  >> " << num1 << " * " << num2 << " = " << num1 * num2 << endl;

    return;
}


void dividir(long long num1, long long num2) {
    cout << "  >> " << num1 << " / " << num2 << " = " << num1 / num2
         << "  (resto " << num1 % num2 << ")" << endl;

    return;
}
#include "../include/calculadora.hh"

#include <iostream>
#include <cmath>

using namespace std;


void sumar(long long num1, long long num2) {
    cout << "El resultado de sumar " << num1 << " + " << num2 << " es " << num1 + num2 << endl;

    return;
}


void restar(long long num1, long long num2) {
    cout << "El resultado de restar " << num1 << " - " << num2 << " es " << num1 - num2 << endl;

    return;
}


void multiplicar(long long num1, long long num2) {
    cout << "El resultado de multiplicar " << num1 << " * " << num2 << " es " << num1 * num2 << endl;

    return;
}


void dividir(long long num1, long long num2) {
    cout << "El resultado de dividir " << num1 << " / " << num2 << " es " << num1 / num2 << ". El modulo es " << num1 % num2 << endl;

    return;
}
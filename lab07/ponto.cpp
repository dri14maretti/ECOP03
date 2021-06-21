// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include "ponto.h"
using namespace std;
#define PI 3.14159265359

double Circulo :: area() {
    return PI * raio * raio;
}

double Cilindro :: area() {
    return 2 * Circulo :: area() + 2 * PI * raio * altura;
}

double Cilindro :: volume() {
    return Circulo :: area() * altura;
}

void Ponto :: read () {
    cout << "x = "; 
    cin >> x; 
    cout << "y = ";
    cin >> y;
}

void Circulo :: read () {
    Ponto :: read();
    cout << "raio = ";
    cin >> raio;
}

void Cilindro :: read() { 
    Circulo :: read();
    cout << "altura = ";
    cin >> altura;
}

ostream& operator << (ostream& output, const Ponto& ponto) {
    ponto.print();
    return output;
}

istream& operator >> (istream& input, Ponto& ponto) {
    ponto.read();
    return input;
}
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
    double x1, y1;
    cin >> x1; 
    cin >> y1;

    x = x1;
    y = y1;
    cout << x1 << y << "\n" << endl;
}

void Circulo :: read () {
    double x1, y1, r1;
    cin >> x1; 
    cin >> y1;
    cin >> r1;

    x = x1;
    y = y1;
    raio = r1;
}

void Cilindro :: read() { 
    double x1, y1, r1, h1;
    cin >> x1; 
    cin >> y1;
    cin >> r1;
    cin >> h1;
    
    x = x1;
    y = y1;
    raio = r1;
    altura = h1;

    cout << x << y << raio << altura << "\n" << endl;
}

ostream& operator << (ostream& output, const Ponto& ponto) {
    ponto.print();
    return output;
}

istream& operator >> (istream& input, Ponto& ponto) {
    ponto.read();
    return input;
}
// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include <cmath>
#include <string>
#include "complexos.cpp"
using namespace std;

int main() {
    Complexo complexo1 (2, 3);
    Complexo complexo2 (5, -2);

    cout << "Complexo 1: "; 
    complexo1.imprimir();
    cout << "Complexo 2: "; 
    complexo2.imprimir();

    cout << "Soma dos complexos: ";
    complexo1.soma(complexo2).imprimir();
    cout << "\n";
    
    cout << "subtracao dos complexos: ";
    complexo1.subtracao(complexo2).imprimir();
    cout << "\n";
    
    cout << "multiplicacao dos complexos: ";
    complexo1.multiplicacao(complexo2).imprimir();
    cout << "\n";
    
    cout << "divisao dos complexos: ";
    complexo1.divisao(complexo2).imprimir();
    cout << "\n";

    cout << "Modulo do complexo 1 : " << complexo1.modulo() << endl;
}
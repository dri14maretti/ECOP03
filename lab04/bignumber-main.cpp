#include <iostream>
#include <cmath>
#include <string>
#include "bignumber.cpp"
using namespace std;

int main() {
    BigNumber numero1, numero2;
    
    cout << "Digite um numero de ate 30 digitos" << endl;
    cin >> numero1;
    cout << "Digite um numero de ate 30 digitos" << endl;
    cin >> numero2;

    cout << "Numero 1 + Numero 2 = " << numero1 + numero2 << endl;
    cout << "Numero 1 - Numero 2 = " << numero1 - numero2 << endl;

    if(numero1 > numero2) cout << "Numero 1 eh maior que o Numero 2" << endl;
    if(numero1 >= numero2) cout << "Numero 1 eh maior ou igual que o Numero 2" << endl;
    if(numero1 < numero2) cout << "Numero 1 eh menor que o Numero 2" << endl;
    if(numero1 <= numero2) cout << "Numero 1 eh menor ou igual que o Numero 2" << endl;
    if(numero1 == numero2) cout << "Numero 1 eh igual que o Numero 2" << endl;
    if(numero1 != numero2) cout << "Numero 1 eh diferente que o Numero 2" << endl;
}
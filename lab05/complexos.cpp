// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include <math.h>
#include <string>
#include "complexos.h"
using namespace std;

int Complexo:: n = 0;

double Complexo:: get(int tipo) {
    return tipo == 0 ? parteImaginaria : parteReal;
}

Complexo Complexo:: soma(Complexo somado) {
    Complexo resultado;

    resultado.parteReal = parteReal + somado.parteReal;
    resultado.parteImaginaria = parteImaginaria + somado.parteImaginaria;

    return resultado;
}


Complexo Complexo:: subtracao(Complexo subtraido) {
    Complexo resultado;

    resultado.parteReal = parteReal - subtraido.parteReal;
    resultado.parteImaginaria = parteImaginaria - subtraido.parteImaginaria;

    return resultado;
}

Complexo Complexo:: multiplicacao(Complexo multiplicado) {
    Complexo resultado;

    resultado.parteReal = parteReal * multiplicado.parteReal;
    resultado.parteImaginaria = parteImaginaria * multiplicado.parteImaginaria;

    return resultado;
}

Complexo Complexo:: divisao(Complexo dividido) {
    Complexo resultado;

    resultado.parteReal = parteReal / dividido.parteReal;
    resultado.parteImaginaria = parteImaginaria / dividido.parteImaginaria;

    return resultado;
}

float Complexo:: modulo() {
    return sqrt(parteReal * parteReal + parteImaginaria * parteImaginaria);
}

void Complexo:: imprimir(){
    char operador = (parteImaginaria < 0) ? '-' : '+';
    cout << "z = " << parteReal << " " << operador << " " << abs(parteImaginaria) << "i" << endl;
}

Complexo Complexo:: operator + (const Complexo & complexo) {
    Complexo resultado(parteReal + complexo.parteReal, parteImaginaria + complexo.parteImaginaria);
    return resultado;
}
Complexo Complexo:: operator - (const Complexo & complexo) {
    Complexo resultado(parteReal - complexo.parteReal, parteImaginaria - complexo.parteImaginaria);
    return resultado;
}
Complexo Complexo:: operator * (const Complexo & complexo) {
    Complexo resultado(parteReal * complexo.parteReal, parteImaginaria * complexo.parteImaginaria);
    return resultado;
}
Complexo Complexo:: operator / (const Complexo & complexo) {
    Complexo resultado(parteReal / complexo.parteReal, parteImaginaria / complexo.parteImaginaria);
    return resultado;
}

bool Complexo:: operator == (const Complexo& complexo) {
    return (this->parteReal == complexo.parteReal) && (this->parteImaginaria == complexo.parteImaginaria);
}

bool Complexo:: operator != (const Complexo& complexo) {
    return (this->parteReal != complexo.parteReal) || (this->parteImaginaria != complexo.parteImaginaria);
}

ostream& operator << (ostream& output, const Complexo& complexo) {
    char operador = (complexo.parteImaginaria < 0) ? '-' : '+';
    output << complexo.parteReal << " " << operador << " " << abs(complexo.parteImaginaria) << "i";
    return output;
}

istream& operator >> (istream& input, Complexo& complexo) {
    input >> complexo.parteReal >> complexo.parteImaginaria;
    return input;
}

Complexo :: operator float() {
    return sqrt(parteReal * parteReal + parteImaginaria * parteImaginaria);
}
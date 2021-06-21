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
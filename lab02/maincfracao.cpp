// Adriano Carvalho Maretti
// 2020009562
#include <iostream>
#include <math.h>
#include <string>
#include "CFracao.cpp"

using namespace std;

int main () {
    CFracao fracao = CFracao(4, 5);
    CFracao fracao2 = CFracao(9, 14);
    CFracao operacao;
    string mensagem;

    cout << "\n---------------------------------------------";
    cout << "\nA fracao construida foi = "<< fracao.getNumerador() << " / " << fracao.getDenominador() << "\n";
    
    cout << "A soma das fracoes eh = ";
    operacao = fracao.Somar(fracao2);
    operacao.Print();
    cout << "\n";
    
    cout << "A subtracao das fracoes eh = ";
    operacao = fracao.Subtrair(fracao2);
    operacao.Print();
    cout << "\n";
    
    cout << "A multiplicacao das fracoes eh = ";
    operacao = fracao.Multiplicar(fracao2);
    operacao.Print();
    cout << "\n";
    
    cout << "A divisao das fracoes eh = ";
    operacao = fracao.Dividir(fracao2);
    operacao.Print();
    cout << "\n";

    mensagem = fracao.MaiorQue(fracao2) ? "maior que" : "menor que";
    mensagem = fracao.Igual(fracao2) ? "igual a" : mensagem;
    
    cout << "A fracao1 eh " << mensagem << " a fracao 2" << endl;

    cout << "Fracao 1 como float: " << fracao.ComoFloat() << endl;
    cout << "Fracao 2 como float: " << fracao2.ComoFloat() << endl;

    return 0;
}
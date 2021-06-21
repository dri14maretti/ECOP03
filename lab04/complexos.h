// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
using namespace std;

#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
    private:
        double parteReal, parteImaginaria;
        static int n;

    public:
        Complexo() {
            parteReal = 1;
            parteImaginaria = 1;
            n++;
        }
        
        Complexo(double real, double imaginaria) {
            parteReal = real;
            parteImaginaria = imaginaria;
            n++;
        }

        ~Complexo() {
            n --;
        }
        
        double get(int tipo);
        Complexo soma(Complexo somado);
        Complexo subtracao(Complexo subtraido);
        Complexo multiplicacao(Complexo multiplicado);
        Complexo divisao(Complexo dividido);
        float modulo();
        void imprimir();

        Complexo operator + (const Complexo&);
        Complexo operator - (const Complexo&);
        Complexo operator * (const Complexo&);
        Complexo operator / (const Complexo&);
        
        bool operator == (const Complexo&);
        bool operator != (const Complexo&);

        friend ostream& operator << (ostream& output, const Complexo& fracao);
        friend istream& operator >> (istream& input, Complexo& fracao);
};

#endif
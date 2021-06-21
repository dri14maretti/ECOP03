// Adriano Carvalho Maretti
// 2020009562
#include <iostream>
using namespace std;

#ifndef RETANGULO_H
#define RETANGULO_H

class CRetangulo {
    private:
        float comprimento;
        float largura;

    public:
        CRetangulo();
        CRetangulo(float comp, float larg);


        ~CRetangulo() {
            cout << endl;
            cout << "Destruindo Retangulo" << endl;
        }

        float getLarg();

        float getComp();

        float area();

        float perimetro();

        bool ehQuadrado();

        bool confereBorda(int pos, int max);

        bool confereValor(float valor);

        void printarRetangulo();

        void setRetangulo();

        void imprimir();
};

#endif
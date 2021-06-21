// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include <cmath>

using namespace std;

#ifndef TRIANGULORETANGULO_H
#define TRIANGULORETANGULO_H

class TrianguloRetangulo {
    private:
        int cateto1;
        int cateto2;
        int hipotenusa;

    public:
        TrianguloRetangulo() {
            cateto1 = 3;
            cateto2 = 4;
            hipotenusa = 5;
        }

        TrianguloRetangulo(int lado1, int lado2, int lado3){
            
            if (verify(lado1, lado2, lado3)){
                cateto1 = lado1;
                cateto2 = lado2;
                hipotenusa = lado3;
            }
            else if (verify(lado1, lado3, lado2)){
                cateto1 = lado1;
                cateto2 = lado3;
                hipotenusa = lado2;
            }
            else if (verify(lado3, lado2, lado1)){
                cateto1 = lado3;
                cateto2 = lado2;
                hipotenusa = lado1;
            }

            else {
                cout << "Os valores pedidos nao formam um triangulo retangulo. Atribuindo padrao..." << endl;
                TrianguloRetangulo();
            }
        }
        
        bool verify(int lado1, int lado2, int lado3);
        void todosMenoresQue200();
};

#endif
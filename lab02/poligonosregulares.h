// Adriano Carvalho Maretti
// 2020009562
#include <iostream>
#include <cmath>
using namespace std;
#define PI = 3.14159265359;

#ifndef POLIGONOS_H
#define POLIGONOS_H

class PoligonosRegulares {
    private: 
        int numeroDeLados;
        int comprimentoLado;
        float pi = 3.14159265359;
        float angle = pi / numeroDeLados;
    
    public:
        float area() {
            return (0.25) * numeroDeLados * comprimentoLado * (cos(angle) / sin(angle));
        }
        float perimetro() {
            return numeroDeLados * comprimentoLado;
        }
        void imprimeNome(){
            switch(numeroDeLados) {
                case 3: printf("Triangulo"); break;
                case 4: printf("Quadrado"); break;
                case 5: printf("Pentagono"); break;
                case 6: printf("Hexagono"); break;
                case 7: printf("Heptagono"); break;
                case 8: printf("Octogono"); break;
                case 9: printf("Eneagono"); break;
                case 10: printf("Decagono"); break;
                default: printf("Nao definido!"); break;
            }
        }
    };

#endif
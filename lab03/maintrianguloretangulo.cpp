// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include <cmath>
#include "trianguloretangulo.cpp"

using namespace std;

int main() {
    TrianguloRetangulo trianguloBasico;
    TrianguloRetangulo triangulo2 (9, 12, 15);
    TrianguloRetangulo triangulo3 (4, 4, 4);

    trianguloBasico.todosMenoresQue200();
}
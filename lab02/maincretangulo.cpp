// Adriano Carvalho Maretti
// 2020009562
#include <iostream>
#include <math.h>
#include <string>
#include "cretangulo.cpp"

using namespace std;

int main () {
    CRetangulo retanguloArray[5];

    for(int i = 0; i < 5; i++){
        cout << "\n------------------------------------------ " <<  endl;
        retanguloArray[i].imprimir();
        cout << "------------------------------------------\n"<< endl;
    }

    CRetangulo *retanguloPonteiro = new CRetangulo();

    cout << "\n------------------------------------------ " <<  endl;
    retanguloPonteiro->imprimir();
    cout << "\n------------------------------------------ " <<  endl;

    delete retanguloPonteiro;
    delete [] retanguloArray;
}
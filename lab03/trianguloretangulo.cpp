// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include <cmath>
#include "trianguloretangulo.h"

using namespace std;

bool TrianguloRetangulo:: verify(int lado1, int lado2, int lado3) {
    cout << sqrt(lado1 * lado1 + lado2 * lado2) << endl;
    return lado3 == sqrt(lado1 * lado1 + lado2 * lado2);
}

void TrianguloRetangulo:: todosMenoresQue200() {
    cout << "\n["; 
    for(int i = 1; i <= 200; i++){
        for(int j = 1; j <= 200; j++){
            for(int k = 1; k <= 200; k++) {
                if(i == sqrt(j * j + k * k)) cout << "(" << i << ", " << j << ", " << k << ")" << endl;
            }
        }
    }
}
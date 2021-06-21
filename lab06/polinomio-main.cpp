// Adriano Carvalho Maretti
// 2020009562

#include "polinomio.cpp"
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main() {
    Polinomio p1(3);

    cin >> p1;

    cout << p1.derivada() << endl;
    cout << p1.calcularEmX(1) << endl;
    cout << p1.raiz(10, 8) << endl;
}
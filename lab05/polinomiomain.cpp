// Adriano Carvalho Maretti
// 2020009562
// Lab05

#include <iostream>
#include "polinomio.cpp"
using namespace std;

int main () {
    Polinomio a(3), b(4), c(4);

    cin >> a;
    cin >> b;
    cout << a << endl;
    cout << b << endl;

    cout << "A + B = " << a + b << endl;
    cout << "A - B = " << a - b << endl;

    c = b;

    cout << "B = " << b << endl;
    cout << "B = " << c << endl;

    return 0;
}
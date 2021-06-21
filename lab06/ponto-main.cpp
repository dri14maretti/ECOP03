// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include "ponto.cpp"
using namespace std;

int main() {
    Ponto p1(1, 2);
    Circulo circ1(1, 2, 3);
    Cilindro cilin1(1, 2, 3, 4);

    cout << "Ponto 1 = " << p1 << endl;
    cout << "Circulo 1 = " << circ1 << endl;
    cout << "Cilindro 1 = " << cilin1 << endl;

    cout << "\nArea circulo = " << circ1.area() << endl;
    cout << "Area cilindro = " << cilin1.area() << endl;
    cout << "Volume cilindro = " << cilin1.volume() << endl;

    Ponto p2;
    Circulo c2;
    Cilindro cil2;

    cout << "Digite x (ENTER) y" << endl;
    cin >> p1;
    cout << "Digite x (ENTER) y (ENTER) raio" << endl;
    cin >> c2;
    cout << "Digite x (ENTER) y (ENTER) raio (ENTER) altura"  << endl;
    cin >> cilin1;

    cout << p2 << endl;
    cout << c2 << endl;
    cout << cil2 << endl;

}
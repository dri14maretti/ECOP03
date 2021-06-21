// Adriano Carvalho Maretti
// 2020009562
// Lab05

#include <iostream>
#include <cmath>
#include "point.cpp"
using namespace std;

int main() {
    Point p1(1,2), p2(4,5);
    Point p3;

    cout << "P3 = ";
    cin >> p3;

    cout << "P1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;
    cout << "\n";
    
    p1++;
    p2++;
    cout << "P1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;
    cout << "\n"; 
    
    p1--;
    p2--;
    cout << "P1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;
    cout << "\n";
    
    ++p1;
    ++p2;
    cout << "P1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;
    cout << "\n";
    
    --p1;
    --p2;
    cout << "P1 = " << p1 << endl;
    cout << "P2 = " << p2 << endl;
    cout << "\n";

    cout << "P1 + P2 = " << p1 + p2 << endl; 
    cout << "P1 - P3 = " << p1 - p3 << endl; 

    cout << "Modulo de P1 = " << (int)p1 << endl;
    cout << "Modulo de P2 = " << (int)p2 << endl;
    cout << "Modulo de P3 = " << (int)p3 << endl;

    if(p3 == p1 || p3 == p2) cout << "P3 eh igual a um dos dois" << endl;
    if(p3 != p1 && p3 != p2) cout << "P3 eh diferente de ambos" << endl;
}
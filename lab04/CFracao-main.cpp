// Adriano Carvalho Maretti
// 2020009562
#include <iostream>
#include <cmath>
#include <string>
#include "CFracao.cpp"

using namespace std;

int main () {
    CFracao fracao1, fracao2;

    cout << "Fracao A: " << endl;
    cin >> fracao1;
    cout << "Fracao B: "<< endl;
    cin >> fracao2;

    cout << "Fracao A + B: " << fracao1 + fracao2 << endl;
    cout << "Fracao A - B: " << fracao1 - fracao2 << endl;
    cout << "Fracao A * B: " << fracao1 * fracao2 << endl;
    cout << "Fracao A / B: " << fracao1 / fracao2 << endl;

    if(fracao1 < fracao2) cout << fracao1 << " < " << fracao2 << endl;
    if(fracao1 <= fracao2) cout << fracao1 << " <= " << fracao2 << endl;
    if(fracao1 > fracao2) cout << fracao1 << " > " << fracao2 << endl;
    if(fracao1 >= fracao2) cout << fracao1 << " >= " << fracao2 << endl;
    if(fracao1 != fracao2) cout << fracao1 << " != " << fracao2 << endl;
    if(fracao1 == fracao2) cout << fracao1 << " = " << fracao2 << endl;
}
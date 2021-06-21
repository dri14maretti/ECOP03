// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include <cmath>
#include <string>
#include "complexos.cpp"
using namespace std;

int main() {
    Complexo complexo1, complexo2;

    cout << "Digite um valor para complexo1" << endl;
    cin >> complexo1;
    cout << "Digite um valor para complexo2" << endl;
    cin >> complexo2;

    cout << "Complexo A + B: " << complexo1 + complexo2 << endl;
    cout << "Complexo A - B: " << complexo1 - complexo2 << endl;
    cout << "Complexo A * B: " << complexo1 * complexo2 << endl;
    cout << "Complexo A / B: " << complexo1 / complexo2 << endl;

    if(complexo1 == complexo2) cout << complexo1 << " eh igual a " << complexo2 << endl;;
    if(complexo1 != complexo2) cout << complexo1 << " eh diferente do " << complexo2 << endl;;
}
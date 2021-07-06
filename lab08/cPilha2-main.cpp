#include <iostream>
#include "cPilha2.h"

using namespace std;

int main() {
    CPilha <int> pilhaDeInt;
    CPilha <float> pilhaDeFloat;
    CPilha <char> pilhaDeChar;
    CPilha <CPilha <int>> pilhaDePilhaDeInt;

    cout << "Pilha de int: \n";
    cin >> pilhaDeInt;
    cout << pilhaDeInt;

    cout << "Pilha de float: \n";
    cin >> pilhaDeFloat;
    cout << pilhaDeFloat;
    
    cout << "Pilha de char: \n";
    cin >> pilhaDeChar;
    cout << pilhaDeChar;
    
    cout << "Pilha de pilha de int: \n";
    cin >> pilhaDePilhaDeInt;
    cout << pilhaDePilhaDeInt;
    
    
    return 0;
}
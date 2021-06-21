#include <iostream>
#include <string>
#include "politico.h"
using namespace std;

void Politico :: imprime() {
    cout << "Nome: " << nome << endl;
    cout << "Partido: " << partido << endl;
    cout << "Numero: " << numero << endl;
}

void Presidente :: imprime() {
    Politico :: imprime();
    cout << "Pais: " << pais << endl;
}

void Governador :: imprime() {
    Presidente :: imprime();
    cout << "Estado: " << estado << endl;
}

void Prefeito :: imprime() {
    Governador :: imprime();
    cout << "Cidade: " << cidade << endl;
}
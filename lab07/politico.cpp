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

void Politico:: read() {
    cout << "Nome: ";
    cin >> nome;
    cout << "Partido: ";
    cin >> partido;
    cout << "Numero: ";
    cin >> numero;
}

void Presidente :: read() {
    Politico :: read();
    cout << "Pais: ";
    cin >> pais;
}

void Governador :: read() {
    Presidente :: read();
    cout << "Estado: ";
    cin >> estado;
}

void Prefeito :: read() {
    Governador :: read();
    cout << "Cidade: ";
    cin >> cidade;
}

ostream& operator << (ostream& output, Politico& politico) {
    politico.imprime();
    return output;
}

istream& operator >> (istream& input, Politico& politico) {
    politico.read();
    return input;
}

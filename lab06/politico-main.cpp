#include <iostream>
#include <string>
#include "politico.cpp"
using namespace std;

int main () {
    Politico* presidente = new Presidente{"Lula", "PT", 13, "Brasil"};
    Politico* governador = new Governador{"Zema", "Novo", 30, "Brasil", "Minas Gerais"};
    Politico* prefeito = new Prefeito{"Sergio", "PSDB", 45, "Brasil", "Minas Gerais", "Pocos de Caldas"};

    cout << "\n";
    presidente->imprime();
    cout << "\n";
    governador->imprime();
    cout << "\n";
    prefeito->imprime();
    cout << "\n";

    delete presidente;
    delete governador;
    delete prefeito;
    return 0;

}
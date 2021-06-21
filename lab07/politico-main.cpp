#include <iostream>
#include <string>
#include "politico.cpp"
using namespace std;
#define MAXIMO_POLITICOS 10000

int menu() {
    int opcao;
    
    cout << endl;
    cout << "Escolha uma das classes de politico para ser criada: " << endl;
    cout << "1 - Presidente" << endl;
    cout << "2 - Governador" << endl;
    cout << "3 - Governador" << endl;
    cout << "0 - Sair" << endl;
    cout << "( )\b\b";

    while(cin >> opcao){
        if(opcao < 0 || opcao > 3) cout << "Digite um valor valido\n";
        return opcao;
    }

}

int main () {
    int quantidade, opcao;
    
    cout << "Informe a quantidade de politicos a serem cadastrados: ";
    cin >> quantidade;
    cout << "\n";

    if(quantidade < 0 || quantidade > MAXIMO_POLITICOS)
        quantidade = 3;

    Politico *vetorPoliticos[quantidade];

    for(int i = 0; i < quantidade; i++) {
        opcao = menu();

        if(opcao == 0) return 0;

        switch(opcao) {
            case 1:
                vetorPoliticos[i] = new Presidente; 
                cout << endl;
                cin >> *vetorPoliticos[i];
            break;

            case 2:
                vetorPoliticos[i] = new Governador;
                cout << endl;
                cin >> *vetorPoliticos[i];
            break;
            
            case 3:
                vetorPoliticos[i] = new Prefeito;
                cout << endl;
                cin >> *vetorPoliticos[i];
            break;
        }
    }

    cout << "\n------------------------------------------" << endl;
    
    for(int i = 0; i < quantidade; i++) {
        cout << *vetorPoliticos[i] << endl;
    }

}
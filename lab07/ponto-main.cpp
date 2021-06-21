// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include "ponto.cpp"
using namespace std;
#define MAXIMO_CIRC 10000

int menu() {
    int opcao;
    
    cout << endl;
    cout << "Escolha uma das classes para ser criada: " << endl;
    cout << "1 - Ponto" << endl;
    cout << "2 - Circulo" << endl;
    cout << "3 - Cilindro" << endl;
    cout << "0 - Sair" << endl;
    cout << "( )\b\b";

    while(cin >> opcao){
        if(opcao < 0 || opcao > 3) cout << "Digite um valor valido\n";
        return opcao;
    }

}

int main() {
    int quantidade, opcao;

    cout << "Informe a quantidade a ser cadastrada: ";
    cin >> quantidade;
    cout << "\n";
    
    if(quantidade < 0 || quantidade > MAXIMO_CIRC)
        quantidade = 3;

    Ponto* vetorCirc[quantidade];
    
    for(int i = 0; i < quantidade; i++) {
        opcao = menu();

        if(opcao == 0) return 0;

        switch(opcao) {
            case 1:
                vetorCirc[i] = new Ponto; 
                cout << endl;
                cin >> *vetorCirc[i];
            break;

            case 2:
                vetorCirc[i] = new Circulo;
                cout << endl;
                cin >> *vetorCirc[i];
            break;
            
            case 3:
                vetorCirc[i] = new Cilindro;
                cout << endl;
                cin >> *vetorCirc[i];
            break;
        }
    }

    cout << "\n------------------------------------------" << endl;
    
    for(int i = 0; i < quantidade; i++) {
        cout << *vetorCirc[i] << endl;
    }

}
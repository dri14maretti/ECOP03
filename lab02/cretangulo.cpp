#include <iostream>
#include <math.h>
#include "cretangulo.h"

void CRetangulo:: setRetangulo() {
    float comp, larg;
    
    cout << "Digite uma largura para o retangulo" << endl;
    cin >> larg; 
    
    cout << "Digite um comprimento para o retangulo" << endl;
    cin >> comp; 
    
    if(!confereValor(comp)) {
        comprimento = 1;
        return;
    }

    if(!confereValor(larg)) {
        largura = 1;
        return;
    }

    comprimento = comp;
    largura = larg;
}

CRetangulo::CRetangulo() {
    cout << endl;
    cout << "Criando um elemento do tipo Retangulo" << endl;
    
    setRetangulo();
    cout << endl;
}

void CRetangulo::printarRetangulo() {
    int i, j;

    for(i = 0; i < this->largura; i++){   
        for(j = 0; j < this->comprimento; j++){
            if(confereBorda(i, this->largura) || confereBorda(j, this->comprimento)) cout << "x";
            else cout << ".";
        }
        cout << "\n";
    }
}

bool CRetangulo::confereValor(float valor) {
    return valor >= 1 && valor <= 20;
}

void CRetangulo::imprimir() {
    string isQuadrado = ehQuadrado() ? "Sim" : "Nao";
    
    cout << "Largura = " << largura << endl;
    cout << "Comprimento = " << comprimento << endl;
    cout << "Area = " << area() << endl;
    cout << "Perimetro = " << perimetro() << endl;
    cout << "Imagem: \n" << endl;
    cout << "Eh quadrado? " << isQuadrado << endl; 
    printarRetangulo();
}

float CRetangulo::area() {
            return comprimento * largura;
}

float CRetangulo::perimetro() {
            return 2 * (comprimento + largura);
}


bool CRetangulo::ehQuadrado() {
            return largura == comprimento;
}


bool CRetangulo::confereBorda(int pos, int max) {
            return pos == 0 || pos == max - 1;
}
// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include <math.h>
#include <string>
#include "bignumber.h"
using namespace std;

void BigNumber:: leia() {
    string lido;
    cout << "Digite um numero de ate 30 digitos: " << endl;
    cin >> lido;
    len = lido.length();

    for(int i = 0; i < len; i++) num[i] = lido[len-i-1] - '0'; 
}

void BigNumber:: print() {
    for(int i = len - 1; i >= 0; i--) cout << num[i];
    cout << endl;
}

BigNumber BigNumber:: soma(BigNumber somado) {
    BigNumber resultado;

    for(int i = 0, vaiUm = 0; vaiUm || i < max(len, somado.len); i++) {
        int sobra = vaiUm;

        if(i < len) sobra += num[i];
        if(i < somado.len) sobra += somado.num[i];
        resultado;num[resultado.len++] = sobra % 10;
        vaiUm = sobra / 10;
    }

    return resultado;
}
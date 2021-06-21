// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
#include <cmath>
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

    for(int i = 0, vaiUm = 0; vaiUm || i < max(len, somado.len); i++)
	{
		int x = vaiUm;
		if(i < len) x += num[i];
		if(i < somado.len) x += somado.num[i];
		resultado.num[resultado.len++] = x % 10;
		vaiUm = x / 10;
	}

    return resultado;
}

BigNumber BigNumber:: subtrai(BigNumber subtraido) {
    BigNumber resultado;
	resultado.len = 0;

	for(int i = 0; i < max(len, subtraido.len); i++){
		int x = 0;
		if(i < len) x += num[i];
		if(i < subtraido.len){
			if(num[i] >= subtraido.num[i])
				x -= subtraido.num[i];
			else {
				x += 10 - subtraido.num[i];
				num[i+1]--;
			}
		}
        resultado.num[resultado.len++] = x;
	}
	return resultado;
}


istream& operator >> (istream& input, BigNumber& numero){
    string a;
    input >> a;
    numero.len = a.length();
    for(int i = 0; i < numero.len; i++){
	    numero.num[i] = a[numero.len-i-1] - '0';
    }
    return input;
}

ostream& operator << (ostream& output, const BigNumber& numero){
	for(int i = numero.len-1; i >= 0; i--)
     	output << numero.num[i];
     return output;
}

BigNumber BigNumber::operator + (BigNumber operando){
	return this->soma(operando);
}

BigNumber BigNumber::operator - (BigNumber operando){
	return this->subtrai(operando);
}

bool BigNumber::operator < (BigNumber numero){
	if(len != numero.len){
		if(len > numero.len) return false;
		else return true;
	} else{
		for(int i = len-1; i >= 0; i--){
			if(num[i] < numero.num[i]) return true;
		}
	}
	return false;
}

bool BigNumber::operator > (BigNumber numero){
	if(len != numero.len){
		if(len < numero.len) return false;
		else return true;
	} else {
		for(int i = len-1; i >= 0; i--){
			if(num[i] > numero.num[i]) return true;
		}
	}
	return false;
}

bool BigNumber::operator == (BigNumber numero){
	if(len == numero.len){
		for(int i = 0; i < len; i++)
			if(num[i] != numero.num[i]) return false;
		return true;
	}
	else return false;
}

bool BigNumber::operator <= (BigNumber numero){
	return(*this < numero || *this == numero);
}

bool BigNumber::operator >= (BigNumber numero){
	return (*this > numero || *this == numero);
}

bool BigNumber::operator != (BigNumber numero){
	return !(*this == numero);
}


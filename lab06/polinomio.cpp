// Adriano Carvalho Maretti
// 2020009562

#include "polinomio.h"
#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

Polinomio :: Polinomio() {
    grau = 2;
    indices = new double[grau];
    
    indices[0] = 1;
    indices[1] = 1;
}

Polinomio :: Polinomio(int g) {
    grau = g + 1; 
    
    indices = new double[grau];

	for(int i = 0; i < grau; i++)
		indices[i] = 1;
}

Polinomio::Polinomio(const Polinomio& _polinomio) {
    grau = _polinomio.grau;
    indices = new double[grau];

    for(int i = 0; i < _polinomio.grau; i++)
    {
        indices[i] = _polinomio.indices[i];
    }
}

Polinomio :: ~Polinomio() {
    delete [] indices;
}

double Polinomio :: calcularEmX(double x) {
    double result;
    for(int i = 0; i < grau; i++) {
        result += indices[i] * pow(x, i);
    }
    return result;
}

Polinomio Polinomio :: derivada() {
    Polinomio retorno(grau - 2);

    for(int i = 1; i < grau ; i++){
        retorno.indices[i-1] = i * indices[i];
    }
    return retorno;
}

double Polinomio::raiz( int xInicial, int numeroDeIteracoes ){
    Polinomio inicio =  (*this) ;
    Polinomio derivadaInicio;

    derivadaInicio = inicio.derivada();

    double root;
    for(int i = 0; i < numeroDeIteracoes; i++ ){
        root = xInicial - inicio.calcularEmX( xInicial) / derivadaInicio.calcularEmX( xInicial );
        xInicial = root;
    }
    return root;
}


Polinomio Polinomio :: operator+(Polinomio& _somando) {
    Polinomio resultado(max(grau, _somando.grau) -1);

    int i;

    for(i = 0; i < min(grau, _somando.grau); i++) {
        resultado.indices[i] = indices[i] + _somando.indices[i];
    }

    if(_somando.grau > grau)
		for(int j = i; j < _somando.grau; j++)
			resultado[i] = _somando.indices[i];
	else
		for(int j = i; j < grau; j++)
			resultado[i] = indices[i];

    return resultado;
}

Polinomio Polinomio :: operator-(Polinomio& _subtraindo) {
    Polinomio resultado(max(grau, _subtraindo.grau) -1);

    int i;

    for(i = 0; i < min(grau, _subtraindo.grau); i++) {
        resultado.indices[i] = indices[i] - _subtraindo.indices[i];
    }
    
    while(resultado.indices[i] == 0) i--;

    if(_subtraindo.grau > grau)
		for(int j = i; j < _subtraindo.grau; j++)
			resultado[i] = - _subtraindo.indices[i];
	else
		for(int j = i; j < grau; j++)
			resultado[i] = indices[i];
    

    return resultado;
}

Polinomio Polinomio::operator=(const Polinomio& _polinomio) {
    delete [] indices;
	grau = _polinomio.grau;
	indices = new double[grau]; 
	for(int i = 0; i < _polinomio.grau; i++){
		indices[i] = _polinomio.indices[i];  
	}
	return *this;
}

double& Polinomio::operator[](int pos) {
    if((pos >= 0) && (pos < grau)) return indices[pos];
    else return indices[0];
}

ostream& operator << (ostream& output, const Polinomio& polinomio){
    for(int i = polinomio.grau - 1; i >= 0; i--) {
        char signal = polinomio.indices[i - 1] > 0 ? '+' : '-';
        if(i == polinomio.grau - 1 && polinomio.indices[i] < 0) output << "- ";
        if(polinomio.indices[i] != 0 && i != 0)
            output << abs(polinomio.indices[i]) << "x" << i << " " << signal << " ";
        if(i == 0) {
            output << abs(polinomio.indices[i]);
        }
    }

    return output;
}

istream& operator >> (istream& input, Polinomio& polinomio) {
    cout << "Polinomio do tipo: CnXn + Cn-1Xn-1 + ... + C1X1 + CO" << endl;

    for(int i = polinomio.grau - 1; i >= 0; i--) {
        cout << "C" << i << " = ";
        input >> polinomio.indices[i];
    }

    return input;
}


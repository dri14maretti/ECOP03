// Adriano Carvalho Maretti
// 2020009562
//Arquivo CFracao.cpp - Implementação da classe CFracao
#include "CFracao.h"
#include <iostream>
using namespace std;

CFracao CFracao::Reduzida(void)
{
    int gcd = 1;
    int minimo = m_numerador;
    if (m_numerador > m_denominador)
        minimo = m_denominador;
    for(int i = 1; i <= minimo; i++)
    {
        if ((m_numerador%i == 0) && (m_denominador%i == 0))
            gcd = i;
    }
    m_numerador /= gcd;
    m_denominador /= gcd;
    return (*this);
}

float CFracao::ComoFloat(void)
{
    return ((float)m_numerador/(float)m_denominador);
}

void CFracao::Print(void)
{
    cout << m_numerador << "/" << m_denominador;
}

CFracao CFracao:: operator+(const CFracao & _Fracao) {
    CFracao temp (
        m_numerador * _Fracao.m_denominador + m_denominador*_Fracao.m_numerador, 
        m_denominador*_Fracao.m_denominador
    );
    return temp.Reduzida();
}

CFracao CFracao:: operator-(const CFracao & _Fracao) {
    CFracao temp (
        m_numerador * _Fracao.m_denominador - m_denominador*_Fracao.m_numerador, 
        m_denominador*_Fracao.m_denominador
    );
    return temp.Reduzida();
}

CFracao CFracao:: operator*(const CFracao & _Fracao) {
    CFracao temp (
        m_numerador * _Fracao.m_numerador, 
        m_denominador*_Fracao.m_denominador
    );
    return temp.Reduzida();
}

CFracao CFracao:: operator/(const CFracao & _Fracao) {
    CFracao temp (
        m_numerador * _Fracao.m_denominador, 
        m_denominador*_Fracao.m_numerador
    );
    return temp.Reduzida();
}

bool CFracao:: operator > (const CFracao&  _Fracao){
    return ((float)(*this) > (float)(_Fracao));
}

bool CFracao:: operator >= (const CFracao&  _Fracao){
    return ((float)(*this) >= (float)(_Fracao));
}

bool CFracao:: operator < (const CFracao&  _Fracao){
    return ((float)(*this) < (float)(_Fracao));
}

bool CFracao:: operator <= (const CFracao&  _Fracao){
    return ((float)(*this) <= (float)(_Fracao));
}

bool CFracao:: operator == (const CFracao&  _Fracao){
    return ((float)(*this) == (float)(_Fracao));
}

bool CFracao:: operator != (const CFracao&  _Fracao){
    return ((float)(*this) != (float)(_Fracao));
}

CFracao:: operator float (void) const{
    return ((float)m_numerador > (float)m_denominador);
}

ostream& operator << (ostream& output, const CFracao& fracao) {
    output << fracao.m_numerador << "/" << fracao.m_denominador;
    // fracao.Print();
    return output;
}

istream& operator >> (istream& input, CFracao& fracao) {
    input >> fracao.m_numerador >> fracao.m_denominador;
    fracao.Reduzida();
    return input;
}


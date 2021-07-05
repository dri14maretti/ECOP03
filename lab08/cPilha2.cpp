#include <iostream>
#include "cPilha2.h"

using namespace std;

// construtor com parâmetros
template<typename Type>
CPilha<Type>::CPilha ( int memoria )
{
	m_ponteirodaPilha  = -1;	// sinaliza pilha vazia
	m_tamanho = (memoria > 0)? memoria : 10;
	m_dados = new Type [ m_tamanho ];
}

// construtor sem parâmetros
template<typename Type>
CPilha<Type>::CPilha ( void )
{
	m_ponteirodaPilha  = -1;	// sinaliza pilha vazia
	m_tamanho =  10;
	m_dados = new Type [ m_tamanho ];
}

// destrutor
template<typename Type>
CPilha<Type>::~CPilha ( void )
{
	delete [] m_dados;
}
// puxar dados da pilha
template<typename Type>bool 
CPilha<Type>::pop ( Type &pop_to )
{
	if (m_ponteirodaPilha == -1) return false;
	pop_to = m_dados[m_ponteirodaPilha--];
	return true;
}

// empurrar dados para a pilha
template<typename Type>bool 
CPilha<Type>::push ( Type push_this )
{
	if (m_ponteirodaPilha == m_tamanho-1) return false;
	m_dados[++m_ponteirodaPilha] = push_this;
	return true;
}

// construtor de cópia
template<typename Type>
CPilha<Type>::CPilha( const CPilha<Type>& p )
{
	m_ponteirodaPilha = p.m_ponteirodaPilha;
	m_tamanho =  p.m_tamanho;
	m_dados = new int [ m_tamanho ];
	for (int i = 0; i <= m_ponteirodaPilha ; i++)
		m_dados[i] = p.m_dados[i];
}

// operador de atribuição
template<typename Type>
CPilha<Type>& CPilha<Type>::operator = (const CPilha<Type>& p)
{
	delete [] m_dados;
	m_ponteirodaPilha = p.m_ponteirodaPilha;
	m_tamanho =  p.m_tamanho;
	m_dados = new int [ m_tamanho ];
	for (int i = 0; i <= m_ponteirodaPilha ; i++)
		m_dados[i] = p.m_dados[i];

	return *this;
}

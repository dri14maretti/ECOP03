//header file para classe pilha 
#ifndef PILHA_H
#define PILHA_H

#include <iostream>
using namespace std;

template<typename Type>
class CPilha 
{
	private:
		Type *m_dados;
		Type m_ponteirodaPilha;	
		int m_tamanho;			

	public:
		CPilha ( int memoria );	
		CPilha ( void );		
		CPilha ( const CPilha<Type>& );	
		~CPilha ( void );		
		bool pop ( Type &pop_to );
		bool push ( Type push_this );

        CPilha& operator=(const CPilha<Type>& p);
	
	
	friend ostream& operator << ( ostream& output, const CPilha<Type>& pilha);
	friend istream& operator >> ( istream& input, CPilha<Type>& pilha);
};
#endif
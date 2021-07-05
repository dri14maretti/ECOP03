//header file para classe pilha 
#ifndef PILHA_H
#define PILHA_H

#include <iostream>
using namespace std;

class CPilha 
{
	private:
		int *m_dados;
		int m_ponteirodaPilha;	
		int m_tamanho;			

	public:
		CPilha ( int memoria );	
		CPilha ( void );		
		~CPilha ( void );		
		bool pop ( int &pop_to );
		bool push ( int push_this );
	
		CPilha ( const CPilha& );	
	
	friend ostream& operator << ( ostream& , const CPilha& );
	friend istream& operator >> ( istream& , CPilha& );
};
#endif
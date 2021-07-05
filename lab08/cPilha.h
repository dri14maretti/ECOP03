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
	
	friend ostream& operator << ( ostream& output, const CPilha& pilha) {
        output << "Pilha : {";
        for(int i = 0; i < pilha.m_tamanho; i++) {
            output << pilha.m_dados[i];
            if(i < pilha.m_tamanho - 1) {
                output << ", ";
            }
        }
        output << "}";

        return output;
    }
	friend istream& operator >> ( istream& input, CPilha& pilha){
        for(int i = 0; i < pilha.m_tamanho; i++) {
            cout << "insira um elemento na pilha: ";
            input >> pilha.m_dados[i];
        }

        return input;
    }
};
#endif
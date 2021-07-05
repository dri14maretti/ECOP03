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

        CPilha& operator=(const CPilha<Type>& p)
	
	
	friend ostream& operator << ( ostream& output, const CPilha<Type>& pilha) {
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
	friend istream& operator >> ( istream& input, CPilha<Type>& pilha){
        for(int i = 0; i < pilha.m_tamanho; i++) {
            cout << "insira um elemento na pilha: ";
            input >> pilha.m_dados[i];
        }

        return input;
    }
};
#endif
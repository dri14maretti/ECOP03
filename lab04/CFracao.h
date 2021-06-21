// Adriano Carvalho Maretti
// 2020009562
// arquivo CFracao.h - interface para a classe CFracao
//
#include <iostream>
using namespace std;
#ifndef ID_CFRACAO
#define ID_CFRACAO
class CFracao
{
    protected:
        int m_numerador;
        int m_denominador;
        // responde ao receptor com o mínimo denominador comun
        CFracao Reduzida(void);
    public:
        // Construtor sem parametros inline
        CFracao(void){
            m_numerador = 1;
            m_denominador = 1;
        }
        CFracao(int Num, int Denom) : m_numerador(Num),
            m_denominador(Denom) { };
        CFracao( const CFracao& f) // Construtor de copia
        {
            m_numerador = f.m_numerador;
            m_denominador = f.m_denominador;
        }
        ~CFracao(void){ }; // Destrutor

        int getNumerador(void) { return m_numerador; }
        int getDenominador(void) { return m_denominador; }

        float ComoFloat(void);
        operator float() const;

        void Print(void);

        CFracao operator + (const CFracao&);
        CFracao operator - (const CFracao&);
        CFracao operator * (const CFracao&);
        CFracao operator / (const CFracao&);

        bool operator > (const CFracao&);
        bool operator < (const CFracao&);
        bool operator <= (const CFracao&);
        bool operator >= (const CFracao&);
        bool operator == (const CFracao&);
        bool operator != (const CFracao&);

        friend ostream& operator << (ostream& output, const CFracao& fracao);
        friend istream& operator >> (istream& input, CFracao& fracao);
};
#endif // ID_CFRACAO
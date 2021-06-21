// Adriano Carvalho Maretti
// 2020009562
// arquivo CFracao.h - interface para a classe CFracao
//
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
        //
        //métodos de acesso
        //
        int getNumerador(void) { return m_numerador; }
        int getDenominador(void) { return m_denominador; }
        //
        //métodos aritiméticos
        //
        // retorna uma nova Fracao que é a soma do receptor com _F
        CFracao Somar(CFracao _F);
        // retorna uma nova Fracao que é a subtração do receptor com _F
        CFracao Subtrair(CFracao _F);
        // retorna uma nova Fracao que o produto do receptor e _F
        CFracao Multiplicar(CFracao _F);
        // retorna uma nova Fracao que o quociente do receptor e _F
        CFracao Dividir(CFracao _F);
        //
        //métodos de coparação
        //
        // devolve verdadeiro se receptor menor que _Fracao
        int MenorQue(CFracao _Fracao);
        // devolve verdadeiro se receptor maior que _Fracao
        int MaiorQue(CFracao _Fracao);
        // devolve verdadeiro se receptor igual a _Fracao
        int Igual(CFracao _Fracao);
        //
        //métodos de conversão
        //
        // devolve o valor da fração como float
        float ComoFloat(void);
        //
        //métodos de impressão
        //
        // mostrar o receptor no formato m_numerador/m_denominador
        void Print(void);
};
#endif // ID_CFRACAO
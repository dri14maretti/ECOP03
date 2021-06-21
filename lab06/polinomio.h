// Adriano Carvalho Maretti
// 2020009562

#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>

using namespace std;

class Polinomio {
    private:
        int grau;
        double *indices;

    public: 
        
        Polinomio();
        Polinomio(int);
        Polinomio(const Polinomio&);

        ~Polinomio();
        
        double calcularEmX(double);
        Polinomio derivada();
        double raiz(int, int);

        Polinomio operator = ( const Polinomio& );


        double& operator[](int);

        Polinomio operator + (Polinomio &);    
        Polinomio operator - (Polinomio &);    
        friend ostream& operator << (ostream& output, const Polinomio &);
        friend istream& operator >> (istream& input, Polinomio &);
};


#endif
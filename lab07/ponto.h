// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
using namespace std;

#ifndef PONTO_H
#define PONTO_H


    class Ponto {
        protected:
            double x, y;
        public:
            Ponto(double pontoX = 0, double pontoY = 0): x{pontoX}, y{pontoY} { }

            virtual void read();
            virtual void print() const { cout << "C("<< x << ", "  << y << ")" << endl; }
            
            virtual double area() { return 0; }
            virtual double volume() { return 0; }

            friend ostream& operator << (ostream&, const Ponto&);
            friend istream& operator >> (istream&, Ponto&);

            ~Ponto() {}
    };

    class Circulo : public Ponto {
        protected:
            double raio;
        public:
            Circulo(double x = 0, double y = 0, double r = 0): Ponto{x, y}, raio{r} { }
            ~Circulo() {}

            void read();
            void print() const { 
                Ponto :: print();
                cout << "raio = " << raio << endl;
            }

            double area();
            double volume() { return 0; }; 

            
    };

    class Cilindro : public Circulo {
        private:
            double altura;
        public:
        Cilindro(double x = 0, double y = 0, double raio = 0, double h = 0): Circulo{x, y, raio}, altura{h} { }
            ~Cilindro() { }

            void read();
            void print() const { 
                Circulo :: print();
                cout << "altura = " << altura << endl; 
            }

            double area();
            double volume();
    }; 

#endif
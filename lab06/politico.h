// Adriano Carvalho Maretti 
// 2020009562
#ifndef POLITICO_H
#define POLITICO_H

    #include <iostream>
    #include <string>
    using namespace std;


    class Politico {
        protected:
            string nome, partido;
            unsigned int numero;
        public:
            Politico(string name, string party, unsigned int number) : nome{name}, partido{party}, numero{number} {
                cout << "Politico Construido! " << endl;
             }

            virtual void imprime() = 0;

            ~Politico() {
                cout << "Politico Destruido! " << endl;
            };
    };

    class Presidente : public Politico{
        protected:
            string pais;
        public:
            Presidente(string nome, string partido, unsigned int numero,string country): Politico{nome, partido, numero}, pais{country} { 
                cout << "Presidente Construido! " << endl;
            } 

            void imprime();

            ~Presidente() { 
                cout << "Presidente Destruido! " << endl;
            }
    };
    
    class Governador : public Presidente {
        protected:
            string estado;
        public:
            Governador(string nome, string partido, unsigned int numero,string pais, string state): Presidente{nome, partido, numero, pais},  estado{state} {
                cout << "Governador Construido! " << endl;
             }
            void imprime();

            ~Governador() { 
                cout << "Governador Destruido! " << endl;
            }
    };

    class Prefeito : public Governador {
        private:
            string cidade;
        public:
            Prefeito(string nome, string partido, unsigned int numero, string pais, string estado, string city) : Governador{nome, partido, numero, pais, estado}, cidade{city} { 
                cout << "Prefeito Construido! " << endl;
            }

            void imprime();

            ~Prefeito() { 
                cout << "Prefeito Destruido! " << endl;
            }
    };

#endif
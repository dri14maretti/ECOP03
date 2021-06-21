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
            Politico(string name = "", string party = "", unsigned int number= 0) : nome{name}, partido{party}, numero{number} {
                cout << "Politico Construido! " << endl;
            }


            virtual void imprime() = 0;
            virtual void read();            

            friend ostream& operator << (ostream&, Politico&);
            friend istream& operator >> (ostream&, Politico&);

            ~Politico() {
                cout << "Politico Destruido! " << endl;
            };
    };

    class Presidente : public Politico{
        protected:
            string pais;
        public:
            Presidente(string nome = "", string partido = "", unsigned int numero = 0,string country = ""): Politico{nome, partido, numero}, pais{country} { 
                cout << "Presidente Construido! " << endl;
            } 

            void imprime();
            void read();
            

            ~Presidente() { 
                cout << "Presidente Destruido! " << endl;
            }
    };
    
    class Governador : public Presidente {
        protected:
            string estado;
        public:
            Governador(string nome = "", string partido = "", unsigned int numero = 0,string pais = "", string state = ""): Presidente{nome, partido, numero, pais},  estado{state} {
                cout << "Governador Construido! " << endl;
             }
            void imprime();
            void read();
            

            ~Governador() { 
                cout << "Governador Destruido! " << endl;
            }
    };

    class Prefeito : public Governador {
        private:
            string cidade;
        public:
            Prefeito(string nome = "", string partido = "", unsigned int numero = 0,string pais = "", string estado = "", string city = "") : Governador{nome, partido, numero, pais, estado}, cidade{city} { 
                cout << "Prefeito Construido! " << endl;
            }

            void imprime();
            void read();
            

            ~Prefeito() { 
                cout << "Prefeito Destruido! " << endl;
            }
    };

#endif
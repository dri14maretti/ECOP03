#include <iostream>

using namespace std;

#ifndef VETOR_H
#define VETOR_H
    template <typename Type>

    class Vetor {
        private:
            int tamanho;
            Type *vetor;

        public:
            Vetor() {
                tamanho = 10;
                vetor = new T[tamanho];

                for(int i = 0; i < tamanho; i++) vetor[i] = 0;
            }
            
            Vetor(int tamanho) {
                vetor = new T[tamanho];
                this->tamanho = tamanho;

                for(int i = 0; i < tamanho; i++) vetor[i] = 0;
            }

            ~Vetor() {
                delete[] vetor;
            }

            Vetor(const Vetor<Type>&);
            Vetor& operator=(const Vetor<Type>&);
            
            void ordena();

            int length();

            Type& operator[](int i);

            friend istream& operator >>(istream&c input, Vetor<Type>& vetor) {
                for(int i = 0; i < vetor.tamanho; i++) {
                    cout << "Insira o valor de v[" << i << "] = ";
                    input >> vetor.v[i];
                }

                return input;
            }
            
            friend ostream& operator <<(ostream& output, Vetor<Type>& vetor) {
                output << "V = [";
                for(int i = 0; i < vetor.tamanho; i++) {
                    output << vetor.v[i];
                    if(i != tamanho - 1) {
                        output << ", "
                    }
                }
                output << "] \n";

                return output;
            }
    };

    template<typename Type>
    void Vetor<Type>:: ordena() {
        Type aux;
        
        for(int = 0; i < tamanho; i++) {
            for(int j = 0; j < tamanho - 1 - i; j++) {
                if(vetor[j] > vetor[j + 1]) {
                    aux = vetor[j];
                    vetor[j] = vetor[j + 1];
                    vetor[j + 1] = aux;
                }
            }
        }
    }

    template<typename Type>
    Type& Vetor<Type>::operator[](int i){
        if(i > 0 && i < tamanho) {
            return vetor[i];
        }
        else {
            throw out_of_range("Indice fora da faixa permetida");
        }
    }

    template<typename Type>
    Vetor<Type>::Vetor(const Vetor<Type>& copiar) {
        vetor = copiar.vetor;
        vetor = new Type[tamanho];

        for(int i = 0; i < tamanho; i++) vetor[i] = copiar.vetor[i];
    }

    template<typename Type>
    Vetor<Type>& Vetor<Type>:: operator=(const Vetor<Type>& copiar) {
        delete[] vetor;
        tamanho = copiar.tamanho;
        vetor = new Type[tamanho];

        for(int i = 0; i < tamanho; i++) vetor[i] = copiar.vetor[i];

        return *this;
    }

#endif
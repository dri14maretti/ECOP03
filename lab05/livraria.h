// Adriano Carvalho Maretti
// 2020009562
// lab05
#include <iostream>
#include <string>
using namespace std;
#ifndef LIVRARIA_H
#define LIVRARIA_H

class LivroLivraria {
     private:
        static int quantidadeDisponivel;
        string titulo;
        string autor;
        string codigoDeBarras;
        float preco;
    
    public:
        LivroLivraria(string, string, string);
        ~LivroLivraria() {};

        bool isDisponivel () {
            return quantidadeDisponivel > 0;
        }

        // Novo livro deste tipo no estoque 
        LivroLivraria operator ++ (int);
        LivroLivraria& operator ++ ();
        
        // Após vender um livro
        LivroLivraria operator -- (int);
        LivroLivraria& operator -- ();
};

#endif
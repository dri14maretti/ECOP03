// Adriano Carvalho Maretti
// 2020009562
// lab05
#include <iostream>
#include <string>
using namespace std;
#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

class LivroBiblioteca {
    private:
        static int quantidade;
        string titulo;
        string autor;
        string codigo;
        bool emprestado;
    
    public:
        LivroBiblioteca(string, string, string);
        ~LivroBiblioteca() {};

        void emprestar();
        void devolver();
        void comprarNovaUnidade();
};

int LivroBiblioteca :: quantidade = 0;

#endif
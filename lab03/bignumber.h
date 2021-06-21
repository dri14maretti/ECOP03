// Adriano Carvalho Maretti
// 2020009562

#include <iostream>

#ifndef BIGNUMBER_H
#define BIGNUMBER_H

class BigNumber {
    private: 
        int num[31];
        int len;

        void inicializar() {
            for(int i = 0; i < 31; i++) num[i] = 0;
        }
    
    public:
        BigNumber(){
            inicializar();
        }

        ~BigNumber() {};

        void leia();
        void print();
        BigNumber soma(BigNumber somado);
        BigNumber subtrai(BigNumber subtrai);

};

#endif
// Adriano Carvalho Maretti
// 2020009562

#include <iostream>
using namespace std;

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


        BigNumber operator + (BigNumber);
		BigNumber operator - (BigNumber);

		bool operator < (BigNumber);
		bool operator > (BigNumber);
		bool operator <= (BigNumber);
		bool operator >= (BigNumber);
		bool operator == (BigNumber);
		bool operator != (BigNumber);

        friend ostream& operator << (ostream& output, const BigNumber& number);
        friend istream& operator >> (istream& input, BigNumber& number);
};

#endif
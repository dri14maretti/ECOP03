// Adriano Carvalho Maretti
// 2020009562
// Lab05

#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
    private:
        int day, month, year;
        int days[13] {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        string months[12]{"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
    
    public:
        Date(int = 1, int = 1, int = 1990);
        ~Date() {};
        
        Date& operator++(); // pré-incremento
        Date operator ++(int); // pós-incremento

        friend Date& operator--(Date&);// pré-incremento
        friend Date operator--(Date&, int);// pós-incremento

        friend ostream& operator << (ostream&, const Date&);
        friend istream& operator >> (istream&, Date&);
};

#endif
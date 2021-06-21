// Adriano Carvalho Maretti
// 2020009562
// Lab05

#include <iostream>
#include <cmath>
#include "date.h"
using namespace std;

Date :: Date (int dd, int mm, int yy) {
    day = abs(dd);
    month = abs(mm);
    year = abs(yy);
}

Date& Date :: operator ++ () {
    day++;
    if(day > days[month]) {
        day = 1;
        month++;
    }

    if(month > 12) {
        month = 1;
        year++;
    }

}

Date Date :: operator ++ (int incremento) {
    Date provisorio = *this;
    ++(*this);
    return provisorio;
}

Date& operator -- (Date& data) {
    data.day--;
    if(data.day == 0) {
        data.month--;
        if(data.month == 0) {
            data.month = 12;
            data.year--;
        }
        data.day = data.days[data.month];
    }

}

Date operator -- (Date& data, int incremento) {
    Date provisorio = data;
    --(data);
    return provisorio;
}

ostream& operator << (ostream& output, const Date& data) {
    output << data.day << " de " << data.months[data.month - 1] << " de "<< data.year;
    return output;
}

istream& operator >> (istream& input, Date& data) {
    input >> data.day >> data.month >> data.year;
    return input;
}

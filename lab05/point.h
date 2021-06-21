// Adriano Carvalho Maretti
// 2020009562
// Lab05


#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

using namespace std;

class Point {
    private:
        int x, y;
    
    public:
        Point(int = 0, int = 0);
        ~Point() {};
        operator int();

        Point operator+ (Point&);
        Point operator- (Point&);

        
        Point& operator++(); // pré-incremento
        Point operator ++(int); // pós-incremento

        bool operator == (Point&);
        bool operator != (Point&);

        bool operator ! ();
        
        friend Point& operator--(Point&);// pré-incremento
        friend Point operator--(Point&, int);// pós-incremento

        friend ostream& operator<<(ostream&, const Point&);
        friend istream& operator>>(istream&, Point&);
        
};

#endif
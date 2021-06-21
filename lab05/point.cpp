// Adriano Carvalho Maretti
// 2020009562
// Lab05

#include <iostream>
#include <cmath>
#include "point.h"
using namespace std;

Point :: Point(int xx, int yy) {
    x = xx;
    y = yy;
}

Point Point :: operator+ (Point& point) {
    Point provisorio {x + point.x, y + point.y};
    return provisorio;
}

Point Point :: operator- (Point& point) {
    Point provisorio {x - point.x, y - point.y};
    return provisorio;
}

Point& Point :: operator ++ () {
    x++;
    y++;
    return *this;
}

Point& operator -- (Point& point){
    point.x--;
    point.y--;
    return point;
}

Point Point :: operator ++ (int incremento) {
    Point provisorio = *this;
    ++(*this);
    return provisorio;
}

Point operator -- (Point& point, int incremento) {
    Point provisorio = point;
    --(point);
    return provisorio;
}

bool Point :: operator == (Point & point) {
    return (point.x == x && point.y == y);
}

bool Point :: operator != (Point& point) {
    return !(point == (*this));
}

bool Point :: operator! () {
    return !(x == 0 || y == 0);
}

Point :: operator int() {
    return sqrt(x*x + y*y);
}

ostream& operator << (ostream& output, const Point& point){
    output << "(" << point.x << ", " << point.y << ")";
    return output;
}

istream& operator>>(istream& input, Point& point) {
    input >> point.x >> point.y;
    return input;
}   
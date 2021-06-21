#include <iostream>
#include <cmath>
#include "date.cpp"
using namespace std;

int main () {
    Date date1, date2;

    cout << "Escreva a data" << endl;
    cin >> date1;
    cout << "Escreva a data" << endl;
    cin >> date2;

    cout << date1 << endl;
    cout << date2 << endl;

    date1--;
    date2--;

    cout << date1 << endl;
    cout << date2 << endl;
    
    date1++;
    date2++;

    cout << date1 << endl;
    cout << date2 << endl;

}
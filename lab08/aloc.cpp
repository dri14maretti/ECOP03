#include <iostream>

using namespace std;

int main() {
    double* ponteiro;

    try {
        while(1) {
            ponteiro = new double[10];
            ponteiro[0] = 1;
        }
    } catch(bad_alloc &error) {
        cout << error.what() << endl; 
    }
}
#include <iostream>
#include "vetor2d.cpp"

using namespace std;

int main(void){

    Vetor2D v1;

    v1.Vetor2d(1,2);

    cout << "x: " << v1.getX() << " y: " << v1.getY() << endl;

    return 0;
}
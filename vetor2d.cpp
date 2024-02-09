#include "vetor2d.hpp"

using namespace std;

void Vetor2D::setX(float _x){
    x = _x;
}

void Vetor2D::setY(float _y){
    y = _y;
}

float Vetor2D::getX(){
    return x;
}

float Vetor2D::getY(){
    return y;
}

void Vetor2D::Vetor2d(float x_, float y_){
    x = x_;
    y = y_;
}
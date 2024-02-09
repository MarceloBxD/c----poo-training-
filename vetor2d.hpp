// hpp is used to define the class and its methods
#ifndef VETOR2D_HPP
#define VETOR2D_HPP

class Vetor2D{
    private:
        float x,y;
    public:
        void Vetor2d(float x_=0, float y_=0){
            x=x_;
            y=y_;
        };
        void setX(float _x);
        void setY(float _y);
        float getX(void);
        float getY(void);
};

#endif
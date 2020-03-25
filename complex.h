#include<iostream>
class complex
{
    double re, img;
    public:
        complex();
        complex(double , double );
        ~complex();
        complex(const complex&);
        void afisare();
        void modul();
        complex ssqrt();
        void setRe(double x);
        void setImg(double x);
        double getRe();
        double getImg();
        complex operator+(const complex&);
        friend complex operator*(const complex&, int x);
        complex operator-(const complex&);
        complex operator*(const complex&);
        complex operator/(const complex&);
};



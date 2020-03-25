#include <iostream>
#include "complex.h"


int main()
{
    double a,b,c,d,e,f;
    std::cin>>a>>b>>c>>d>>e>>f;
complex H(a,b);
complex I(c,d);
complex J(e,f);
complex delta;
complex x1,x2;
complex ceva;
ceva=H*J;
delta=I*I-ceva*4;
I.setRe(-I.getRe());
I.setImg(-I.getImg());
x1=(I+delta.ssqrt())/(H*4);
x2=(I-delta.ssqrt())/(H*4);
x1.afisare();
x2.afisare();
return 0;
}

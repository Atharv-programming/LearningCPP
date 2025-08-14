/*
    Author : Atharv Anil Ambekar
    Date : 14th August 2025
    Purpose : Sending Object as an argument to a function
*/

#include<iostream>

class Complex
{
    int a;
    int b;

    public :
        void SetAB(int, int);
        void AdditionOfComplexNumbers(Complex, Complex);
};

int main(void)
{
    Complex o1, o2;

    int a1, b1;
    std::cout<<"Enter 1st Complex number ";
    std::cin>>a1>>b1;
    std::cout<<std::endl;

    o1.SetAB(a1, b1);

    int a2, b2;
    std::cout<<"Enter 2nd Complex number ";
    std::cin>>a2>>b2;
    std::cout<<std::endl;

    o2.SetAB(a2, b2);

    Complex o3;
    o3.AdditionOfComplexNumbers(o1, o2);

    return(0);
}

void Complex :: SetAB(int x, int y)
{
    a = x;
    b = y;
}

void Complex::AdditionOfComplexNumbers(Complex o1, Complex o2)
{
    int A = o1.a + o2.a;
    int B = o1.b + o2.b;

    std::cout<<"Addition of these 2 complex number is "<<A<<"+"<<B<<"i"<<std::endl;
}

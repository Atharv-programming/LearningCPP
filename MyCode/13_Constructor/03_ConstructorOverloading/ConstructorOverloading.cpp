/*
    Author : Atharv Anil Ambekar
    Date : 14th August 2025
    Purpose : learning about constructor (Constructor Overloading)
*/
#include<iostream>

class Complex
{
    int a, b;
    public :
        Complex(void)
        {
            a = 0;
            b = 0;
        }

        Complex(int x)
        {
            a = x;
            b = 0;
        }

        Complex(int x, int y)
        {
            a = x;
            b = y;
        }

        void PrintNumbers(void)
        {
            std::cout<<a<<" + "<<b<<"i"<<std::endl;
        }
};

int main(void)
{
    Complex c1;
    c1.PrintNumbers();

    // Implicit Delcaration of Object
    Complex c2(5);
    c2.PrintNumbers();

    // Explicit Delcaration of Object
    Complex c3 = Complex(3, 5);
    c3.PrintNumbers();

    return(0);
}
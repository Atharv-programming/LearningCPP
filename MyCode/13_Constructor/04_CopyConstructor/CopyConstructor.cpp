/*
    Author : Atharv Anil Ambekar
    Date : 15th August 2025
    Purpose : learning about constructor (Copy constructor) & Dynamic Initialization of object using constructor
*/
#include<iostream>

class Number
{
    int a, b;

    public :
        Number(){} // Default Constructor as better practice

        Number(int x, int y)
        {
            a = x;
            b = y;
        }

        Number(Number &n1)
        {
            a = n1.b;
            b = n1.a;
        }

        void Read(void)
        {
            std::cout<<"a = "<<a<<std::endl;
            std::cout<<"b = "<<b<<std::endl;
            std::cout<<"--------------------------"<<std::endl;
        }
};

int main(void)
{
    Number n1, n2;

    n1 = Number(1, 2); // Dynamic Initialization of object using constructor
    n1.Read();

    n2 = Number(n1); // Providing n1 object to copy constructor
    n2.Read();

    Number n3 = n1; // Providing n1 object to copy constructor
    n3.Read();

    
    /*
        Here
            Number n4;
            n4 = n1; 
        is not allowed as copy constructor cannot be invoked like this
    */

    return(0);
}
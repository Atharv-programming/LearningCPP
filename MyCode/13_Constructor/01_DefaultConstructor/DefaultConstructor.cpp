/*
    Author : Atharv Anil Ambekar
    Date : 14th August 2025
    Purpose : learning about constructor (default constructor)
*/

#include<iostream>

// This is Default COnstructor as it do not take any argument
class DefaultConstructor
{
    int a, b;
    
    public :
        DefaultConstructor(void)
        {
            a = 30;
            b = 30;
        }

        void PrintNumbers(void)
        {
            std::cout<<"a = "<<a<<std::endl<<"b = "<<b<<std::endl;
        }
};

int main(void)
{
    DefaultConstructor O1;

    O1.PrintNumbers();

    return(0);
}
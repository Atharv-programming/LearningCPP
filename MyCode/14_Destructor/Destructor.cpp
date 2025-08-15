/*
    Author : Atharv Anil Ambekar
    Date : 15th August 2025
    Purpose : learning about Destructor
*/
#include<iostream>

class Number 
{
    static int num;

    public :
        Number(void)
        {
            num++;
            std::cout<<"This is Constructor of Object "<<num<<std::endl;
        }

        ~Number()
        {
            std::cout<<"This is Destructor of Object "<<num<<std::endl;
            num--;
        }
};

int Number::num = 0;

int main(void)
{
    std::cout<<"This is main() "<<std::endl;

    Number n1;
    {
        Number n2;
    }

    return(0);
}
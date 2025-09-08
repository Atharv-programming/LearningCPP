/*
    Author : Atharv Anil Ambekar
    Date : 8th September 2025
    Purpose : learning about Initiialization Section in Constructor
*/
#include<iostream>

class Sum
{
    int a;
    int b;
    public :
        Sum(int i, int j) : a(i), b(j)
        {
            std::cout<<"Addition of these two numbers is : "<<a+b<<std::endl;
        }
};

int main(void)
{
    Sum(5, 7);

    return(0);
}
/*
    Author : Atharv Anil Ambekar
    Date : 25th July 2025
    Purpose : Finding Fibonacci number for a specific term using recursion
*/

#include<iostream>

int fib(int);

int main(void)
{
    int a;
    std::cout<<"Enter the term from which you want fibonacci number ";
    std::cin>>a;

    std::cout<<"The fibonacci number at term "<<a<<" is "<<fib(a)<<std::endl;

    return(0);
}

int fib(int n)
{
    if(n <= 1)
    {
        return(1);
    }
    return(fib(n-2) + fib(n-1));
}
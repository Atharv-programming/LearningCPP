/*
    Author : Atharv Anil Ambekar
    Date : 25th July 2025
    Purpose :   Learning Inline function / Inline Keyword
                Function call is replaced by the body of function by compiler
*/

#include <iostream>

inline int sum(int a, int b)
{
    return(a+b);
}

int main(void)
{
    int a, b;
    std::cout<<"Enter two numbers"<<std::endl;
    std::cin>>a>>b;

    std::cout<<"Sum of "<<a<<" & "<<b<<" is "<<sum(a, b)<<std::endl;

    return(0);
}

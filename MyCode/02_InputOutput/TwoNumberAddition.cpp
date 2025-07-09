/*
    Author : Atharv Anil Ambekar
    Date : 9th July 2025
    Purpose : Basic Input Output (Add two numbers)
*/

#include<iostream>

int main(void)
{
    int num1, num2;

    std::cout<<"Enter one number : ";
    std::cin>>num1;

    std::cout<<"Enter another number : ";
    std::cin>>num2;

    std::cout<<"Sum of these two number is "<<num1+num2<<std::endl;

    return(0);
}
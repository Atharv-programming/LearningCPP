/*
    Author : Atharv Anil Ambekar
    Date : 25th July 2025
    Purpose :   Learning Referance varible
                Variable pointing to an existing variable is referance variable
*/

#include <iostream>

int main(void)
{
    int x = 9;
    int &y = x;

    std::cout<<"Initial value of x "<<x<<std::endl;
    std::cout<<"Created referance variable of x as y "<<y<<std::endl;

    x = x + 1;
    std::cout<<"Value of x and y respectively after changing value of x "<<x<<" "<<y<<std::endl;

    y = y + 1;
    std::cout<<"Value of x and y respectively after changing value of y "<<x<<" "<<y<<std::endl;

    return(0);
}
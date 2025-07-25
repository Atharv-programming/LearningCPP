/*
    Author : Atharv Anil Ambekar
    Date : 9th July 2025
    Purpose : Learning Default Argument
*/

#include <iostream>

int AreaOfCircle(int radius, float PI= 3.14f)
{
    return(PI * (radius * radius));
}

int main(void)
{
    std::cout<<"Area of circle when PI is not given = "<<AreaOfCircle(3)<<std::endl;

    std::cout<<"Area of circle when PI is given = "<<AreaOfCircle(3, 4.0f)<<std::endl;

    return(0);
}


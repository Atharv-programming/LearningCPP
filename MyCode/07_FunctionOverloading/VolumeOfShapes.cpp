/*
    Author : Atharv Anil Ambekar
    Date : 25th July 2025
    Purpose : Learning Function overloaing
*/

#include<iostream>

int volume(int side);
float volume(float length, float width, float breadth);
float volume(float radius);

int main(void)
{
    std::cout<<"Volume of Cube "<<volume(4)<<std::endl;
    std::cout<<"Volume of CUboid "<<volume(3.0f, 4.0f, 5.0f)<<std::endl;
    std::cout<<"volume of a sphere "<<volume(4.0f)<<std::endl;

    return(0);
}

int volume(int side)
{
    return(side * side * side);
}

float volume(float length, float width, float breadth)
{
    return(length*width*breadth);
}

float volume(float radius)
{
    return((4/3)* 3.14f * (radius*radius*radius));
}


/*
    Author : Atharv Anil Ambekar
    Date : 14th August 2025
    Purpose : learning about constructor (default constructor)
*/

#include<iostream>
#include<math.h>

class Points
{
    int x, y;
    public :
        Points(int a, int b)
        {
            x = a;
            y = b;
        }

        friend float DistanceBetweenTwoPoints(Points, Points);
};

float DistanceBetweenTwoPoints(Points p1, Points p2)
{
    float distance = sqrt(pow((p2.x - p1.x), 2.0f) + pow((p2.y - p1.y), 2.0f));

    return(distance);
}


int main(void)
{
    Points p1(1, 4);
    Points p2(5, 6);

    std::cout<<"Distance between 2 points p1(1, 4) and p2(5, 6) is : "<<DistanceBetweenTwoPoints(p1, p2)<<std::endl;

    return(0);
}
/*
    Author : Atharv Anil Ambekar
    Date : 25th September 2025
    Purpose : learning how to use pointer in pointing objects of class
*/
#include<iostream>

class Shop
{
    int id;
    float netWorth;

    public :
        void setData(int x, float y)
        {
            id = x;
            netWorth = y;
        }

        void getData(void)
        {
            std::cout<<"id is "<<id<<" & netWorth is "<<netWorth<<std::endl;
        }
};

int main(void)
{
    Shop *ptr = new Shop[3];
    Shop *ptrTemp = ptr;

    for(int i = 0; i < 3; i++)
    {
        std::cout<<"Tell me id and networth of Shop "<<i<<std::endl;
        int p;
        float q;
        std::cin>>p>>q;
        ptr->setData(p, q);
        ptr++;
    }
    
    ptr = ptrTemp;

    for(int i = 0; i < 3; i++)
    {
        ptr->getData();
        ptr++;
    }

    delete[] ptrTemp;

    return(0);
}
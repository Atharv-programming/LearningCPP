/*
    Author : Atharv Anil Ambekar
    Date : 8th September 2025
    Purpose : learning about Ambigity in inheritance
*/
#include<iostream>

class B_1
{
    public :
        void greet(void)
        {
            std::cout<<"Hello !!"<<std::endl;
        }
};

class B_2
{
    public :
        void greet(void)
        {
            std::cout<<"Hello World!!"<<std::endl;
        }
};

class D : public B_1, public B_2
{
    public :
        void greet(void)
        {
            B_2 :: greet();
        }
};

int main(void)
{
    D d1;
    d1.greet();

    return(0);
}
/*
    Author : Atharv Anil Ambekar
    Date : 8th September 2025
    Purpose : learning Inheritance syntax
*/
#include<iostream>

class Base
{
    private :
        int private_base_i; // cannot be access by any derived class

    public :
        int public_base_i;
};

class Derived_1 : public Base
{
    public :
        Derived_1(int num)
        {
            public_base_i = num;
        }

        void getNum(void)
        {
            std::cout<<"public_base_i :"<<public_base_i<<std::endl;
        }
};

class Derived_2 : private Base // by default visiblity mode
{
    public :
        Derived_2(int num)
        {
            public_base_i = num; 
        }

        void getNum(void)
        {
            std::cout<<"public_base_i :"<<public_base_i<<std::endl;
        }
};



int main(void)
{
    Derived_1 d1(3);
    d1.getNum();

    std::cout<<"Directly accessing public_base_i :"<<d1.public_base_i<<std::endl;

    Derived_2 d2(25);
    d2.getNum();

    // std::cout<<"Directly accessing public_base_i :"<<d2.public_base_i<<std::endl;
    // --> cannot access as private visiblity mode on Derived_2 class makes all public members of base class private member for derived class

    return(0);
}
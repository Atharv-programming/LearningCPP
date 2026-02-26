/*
    Author : Atharv Anil Ambekar
    Date : 1st October 2025
    Purpose : learning Virtual function
*/
#include<iostream>

class Base
{
    public :
        virtual void Display(void)
        {
            std::cout<<"Hello from Base Class!!!"<<std::endl;
        }
};

class Derived1 : public Base
{
    public :
        void Display(void)
        {
            std::cout<<"Hello from Derrived 1 class"<<std::endl;
        }
}; 

int main(void)
{
    Base * baseClassObj;

    Derived1 derivedClassObject;

    baseClassObj = &derivedClassObject;
    
    baseClassObj->Display();

    return(0);
}
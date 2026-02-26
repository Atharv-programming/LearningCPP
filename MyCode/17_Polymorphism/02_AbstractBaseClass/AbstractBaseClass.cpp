/*
    Author : Atharv Anil Ambekar
    Date : 1st October 2025
    Purpose : learning about Abstract Base Class
*/
#include<iostream>

class Base // This class became Abstract Base class as it has pure virtual function
{
    public :
        virtual void Display(void)=0;
};

class Derived1 : public Base
{
    public :
        void Display(void) // If i remove this function it will throw error of 
                           // Abstract class function has no overrider
        {
            std::cout<<"Hello from Derrived 1 class"<<std::endl;
        }
}; 

int main(void)
{
    Base * baseClassPtr;

    // Base baseClassObj; // This will Throw error

    Derived1 derivedClassObject;

    baseClassPtr = &derivedClassObject;
    
    baseClassPtr->Display();

    return(0);
}
/*
    Author : Atharv Anil Ambekar
    Date : 26th September 2025
    Purpose : learning this pointer
*/
#include<iostream>

class A
{
    int a, b;

    public :
        A& setData(int a, int b)
        {
            this->a = a;
            this->b = b;
            return *this;
        }

        void getData(void)
        {
            std::cout<<"a is "<<a<<" & b is "<<b<<std::endl;
        }
};

int main(void)
{
    A obj;

    obj.setData(2, 3).getData();
    // I can use setData().getData() as setData() is returning an object which can be used to call getData()
    // no need to explicitly write obj.getData();

    return(0);
}
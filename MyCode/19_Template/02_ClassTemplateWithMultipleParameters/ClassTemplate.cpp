/*
    Author : Atharv Anil Ambekar
    Date : 28th Feb 2026
    Purpose : learning about Template (Class Template With Multiple Parameters)
*/
#include<iostream>

template <class T1, class T2>
class TwoDifferentData
{
    T1 data1;
    T2 data2;

    public :
        TwoDifferentData(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }

        void display(void)
        {
            std::cout<<"-------------------------------"<<std::endl;
            std::cout<<"Data 1 : "<<this->data1<<std::endl;
            std::cout<<"Data 2 : "<<this->data2<<std::endl;
        }
};

int main(void)
{
    TwoDifferentData<int, float> T1(4, 5.6f);
    T1.display();
    TwoDifferentData<char, float> T2('C', 3.2f);
    T2.display();
    TwoDifferentData<double, int> T3(9.8, 5);
    T3.display();

    return(0);
}
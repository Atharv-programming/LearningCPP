/*
    Author : Atharv Anil Ambekar
    Date : 28th Feb 2026
    Purpose : learning about Template (Class Template with default parameter)
*/
#include<iostream>

template <class T1, class T2=int>
class TemplateWithDefaultParam
{
    T1 data1;
    T2 data2;

    public :
        TemplateWithDefaultParam(T1 a, T2 b)
        {
            data1 = a;
            data2 = b;
        }

        void display(void)
        {
            std::cout<<"Data 1 : "<<this->data1<<std::endl;
            std::cout<<"Data 2 : "<<this->data2<<std::endl;
        }
};

int main(void)
{
    TemplateWithDefaultParam<char> test('A', 4);
    test.display(); 
    return(0);
}
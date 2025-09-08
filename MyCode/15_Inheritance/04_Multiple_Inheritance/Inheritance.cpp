/*
    Author : Atharv Anil Ambekar
    Date : 8th September 2025
    Purpose : learning about Multiple Inheritance
*/
#include<iostream>

class Base_1
{
    protected :
        int protected_base_1_num;

    public :
        void SetBase1num(int num)
        {
            protected_base_1_num = num;
        }
};

class Base_2
{
    protected :
        int protected_base_2_num;

    public :
        void SetBase2num(int num)
        {
            protected_base_2_num = num;
        }
};

class Base_3
{
    protected :
        int protected_base_3_num;

    public :
        void SetBase3num(int num)
        {
            protected_base_3_num = num;
        }
};

class Derived : public Base_1, public Base_2, public Base_3
{
    public :
        void Show(void)
        {
            std::cout<<"The number from base 1 : "<<protected_base_1_num<<std::endl; 
            std::cout<<"The number from base 2 : "<<protected_base_2_num<<std::endl; 
            std::cout<<"The number from base 3 : "<<protected_base_3_num<<std::endl; 
            std::cout<<"Their sum is : "<<protected_base_1_num + protected_base_2_num + protected_base_3_num<<std::endl; 
        }
};

/*
    For Derived class
    Data Members :
        protected_base_1_num -> protected
        protected_base_2_num -> protected
        protected_base_3_num -> protected
    
    Member function :
        SetBase1Num() -> public
        SetBase2Num() -> public
        SetBase3Num() -> public
        Show()        -> public
*/

int main(void)
{
    Derived d1;

    d1.SetBase1num(4);
    d1.SetBase2num(8);
    d1.SetBase3num(12);
    d1.Show();

    return(0);
}
/*
    Author : Atharv Anil Ambekar
    Date : 8th September 2025
    Purpose : learning how to access private member of base class throught derived class
*/
#include<iostream>

class Base
{
    private :
        int private_base_num;
    public :
        void Setdata(int num);
        int GetData(void);
};

void Base::Setdata(int num)
{
    private_base_num = num;
}

int Base::GetData(void)
{
    return(private_base_num);
}

class Derived_1 : public Base
{

};

class Derived_2 : private Base
{
    public :
        void setDataForSetData(int num)
        {
            Setdata(num);
        }

        int getDataFromGetData(void)
        {
            return(GetData());
        }
};

int main(void)
{
    Derived_1 d1;
    Derived_2 d2;

    d1.Setdata(3);
    std::cout<<"Private member of base class using public visiblity mode = private_base_num :"<<d1.GetData()<<std::endl;

    d2.setDataForSetData(6);
    std::cout<<"Private member of base class using private visiblity mode = private_base_num :"<<d2.getDataFromGetData()<<std::endl;

    return(0);
}
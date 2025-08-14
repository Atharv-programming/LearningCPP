/*
    Author : Atharv Anil Ambekar
    Date : 25th July 2025
    Purpose : Learning Public, Private Acess Modifiers
    
*/

#include<iostream>

class Access
{
    private :
        int a, b, c;
        void GetPrivateData()
        {
            std::cout<<"Value of a = "<<a<<std::endl;
            std::cout<<"Value of b = "<<b<<std::endl;
            std::cout<<"Value of c = "<<c<<std::endl;
        }

    public :
        int d, e;
        void SetPrivateData(int a1, int b1, int c1);
        void SetData(int a1, int b1, int c1, int d1, int e1);
        void GetAllData(void);
        void GetPrivateOnlyData(void);
};

void Access::SetPrivateData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

void Access::SetData(int a1, int b1, int c1, int d1, int e1)
{
    a = a1;
    b = b1;
    c = c1;
    d = d1;
    e = e1;
}

void Access::GetAllData(void)
{
    std::cout<<"Value of a = "<<a<<std::endl;
    std::cout<<"Value of b = "<<b<<std::endl;
    std::cout<<"Value of c = "<<c<<std::endl;
    std::cout<<"Value of d = "<<d<<std::endl;
    std::cout<<"Value of e = "<<e<<std::endl;
}

void Access::GetPrivateOnlyData(void)
{
    GetPrivateData();
}

int main(void)
{
    Access ac;
    ac.SetData(1, 2, 3, 4, 5);
    ac.GetAllData();

    std::cout<<"---------------------------------------------------"<<std::endl;

    ac.SetPrivateData(6, 7, 8);
    ac.GetPrivateOnlyData();

    // ac.a = 10; will throw error as a is inaccessible

    return(0);
}
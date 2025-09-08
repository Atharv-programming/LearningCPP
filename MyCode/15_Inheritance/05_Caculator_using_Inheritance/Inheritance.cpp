/*
    Author : Atharv Anil Ambekar
    Date : 8th September 2025
    Purpose : Example of Inheritance
*/
#include<iostream>
#define USE_MATH_DEFINES 1
#include<cmath>

class TakeTwoNumbers
{
    protected :
        int num1;
        int num2;

    public :
        TakeTwoNumbers(int x, int y)
        {
            num1 = x;
            num2 = y;
        }

        int GetNum1(void)
        {
            return(num1);
        }

        int GetNum2(void)
        {
            return(num2);
        }
};

class SimpleCalculator : public TakeTwoNumbers
{
    public :
        SimpleCalculator(int x, int y) : TakeTwoNumbers(x, y) {}

        void Show(void)
        {
            std::cout<<"Num 1 : "<<GetNum1()<<std::endl;
            std::cout<<"Num 2 : "<<GetNum2()<<std::endl;
            std::cout<<"Addition of both numbers : "<<GetNum1() + GetNum2()<<std::endl;
            std::cout<<"Subtracting num 2 from num1 : "<<GetNum1() - GetNum2()<<std::endl;
            std::cout<<"Product of both numbers : "<<GetNum1() * GetNum2()<<std::endl;
            std::cout<<"Dividing num 1 from num 2 : "<<GetNum1() / GetNum2()<<std::endl;
        }
};

class ScientificCalculator : public TakeTwoNumbers
{
    public :
        ScientificCalculator(int x, int y) : TakeTwoNumbers(x, y) {}

        void Show(void)
        {
            std::cout<<"Num 1 : "<<GetNum1()<<std::endl;
            std::cout<<"Num 2 : "<<GetNum2()<<std::endl;
            std::cout<<"sin(num 1) : "<<sinf((float)GetNum1())<<" sin(num 2) : "<<sinf((float)GetNum2())<<std::endl;
            std::cout<<"cos(num 1) : "<<cosf((float)GetNum1())<<" cos(num 2) : "<<cosf((float)GetNum2())<<std::endl;
            std::cout<<"num 1 rest to num 2 : "<<pow((double)GetNum1(), (double)GetNum2())<<std::endl;
            std::cout<<"Square root of num 1 :"<<sqrt((long double)GetNum1())<<" & num 2 : "<<sqrt((long double)GetNum2())<<std::endl;  
        }
};


int main(void)
{
    SimpleCalculator s1(10, 15);
    ScientificCalculator s2(30, 40);

    s1.Show();
    s2.Show();
    
    return(0);
}
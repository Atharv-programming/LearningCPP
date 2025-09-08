/*
    Author : Atharv Anil Ambekar
    Date : 8th September 2025
    Purpose : learning about Multilevel Inheritance
*/
#include<iostream>

class Student
{
    protected :
        int roll_number;

    public :
        void GetRollno(void)
        {
            std::cout<<"Roll number : "<<roll_number<<std::endl;
        }
};

class Marks : public Student
{
    protected :
        int maths;
        int physics;
        void GetMarks(void)
        {
            std::cout<<"Maths marks : "<<maths<< std::endl;
            std::cout<<"Physics marks : "<<physics<< std::endl;
        }
    
    public :
        void SetRollno(int r);
        void SetMarks(int, int);
};

void Marks::SetRollno(int r)
{
    roll_number = r;
}

void Marks::SetMarks(int m, int p)
{
    maths = m;
    physics = p;
}

class Result : public Marks
{
    public :
        void GetPercentage(void)
        {
            GetRollno();

            GetMarks();

            std::cout<<"Your percentage : "<<((maths + physics)/2)<<std::endl;
        }
};


int main(void)
{
    Result Atharv;
    Atharv.SetRollno(1);
    Atharv.SetMarks(80, 90);
    Atharv.GetPercentage();

    return(0);
}
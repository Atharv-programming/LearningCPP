/*
    Author : Atharv Anil Ambekar
    Date : 8th September 2025
    Purpose : learning about Virtual Base Class
*/
#include<iostream>

class Student
{
    protected :
        int roll_no;

    public :
        void SetRollNumber(int r)
        {
            roll_no = r;
        }
};

class Maths : virtual public Student
{
    protected :
        int maths_marks;
    
    public :
        void SetMathsMarks(int marks)
        {
            maths_marks = marks;
        }

        int GetMathsMarks(void)
        {
            return(maths_marks);
        }
};

class Physics : virtual public Student
{
    protected :
        int physics_marks;
    
    public :
        void SetPhysicsMarks(int marks)
        {
            physics_marks = marks;
        }

        int GetPhysicsMarks(void)
        {
            return(physics_marks);
        }
};

class result : public Physics, public Maths
{
    public :
        void Show_result(void)
        {
            std::cout<<"Your roll number is : "<<roll_no<<std::endl;
            std::cout<<"Maths marks : "<<GetMathsMarks()<<std::endl;
            std::cout<<"Physics marks : "<<GetPhysicsMarks()<<std::endl;
            std::cout<<"Result : "<<((maths_marks + physics_marks)/2)<<std::endl;
        }
};

int main(void)
{
    result Atharv;
    Atharv.SetRollNumber(1);
    Atharv.SetMathsMarks(90);
    Atharv.SetPhysicsMarks(80);

    Atharv.Show_result();
    
    return(0);
}
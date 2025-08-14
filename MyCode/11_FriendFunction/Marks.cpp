/*
    Author : Atharv Anil Ambekar
    Date : 14th August 2025
    Purpose : learning friend function
*/

#include<iostream>

class Subject
{
    int marks;

    public :
        void SetMarks(int n)
        {
            if(n < 0 || n > 100)
            {
                std::cout<<"Invalid Marks..."<<std::endl;
                exit(EXIT_FAILURE);
            }
            else
            {
                marks = n;
            }
            
            marks = n;
        }

        // Friend Function
        friend float Percentage(Subject P, Subject C, Subject M, Subject E, Subject B);
};

int main(void)
{
    Subject Physics, Chemistry, Maths, English, Biology;
    int pMarks = 0, cMarks = 0, mMarks = 0, eMarks = 0, bMarks = 0;

    std::cout<<"Tell me marks for Physics out of 100 : ";
    std::cin>>pMarks;
    Physics.SetMarks(pMarks);

    std::cout<<"Tell me marks for Chemistry out of 100 : ";
    std::cin>>cMarks;
    Chemistry.SetMarks(cMarks);

    std::cout<<"Tell me marks for Maths out of 100 : ";
    std::cin>>mMarks;
    Maths.SetMarks(mMarks);

    std::cout<<"Tell me marks for English out of 100 : ";
    std::cin>>eMarks;
    English.SetMarks(eMarks);

    std::cout<<"Tell me marks for Biology out of 100 : ";
    std::cin>>bMarks;
    Biology.SetMarks(bMarks);

    std::cout<<"Percentage : "<<Percentage(Physics, Chemistry, Maths, English, Biology)<<"%"<<std::endl;

    return(0);
}

float Percentage(Subject P, Subject C, Subject M, Subject E, Subject B)
{
    return(((P.marks + C.marks + M.marks + E.marks+ B.marks)/500.0f) * 100.0f);
}
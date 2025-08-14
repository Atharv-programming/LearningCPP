/*
    Author : Atharv Anil Ambekar
    Date : 13th August 2025
    Purpose : Learning static keyword (static variable, static function)
*/

#include<iostream>

class Employee{

    int id;
    static int count;

    public :
        void SetId(int);
        
        static int TellCountofEmployee(void)
        {
            return(count);
        }
};

int Employee::count;

int main(void)
{
    Employee Atharv;
    Employee Karan;
    Employee Shantanu;

    Atharv.SetId(1);
    Karan.SetId(3);
    Shantanu.SetId(9);

    std::cout<<"No of Employees are "<<Employee::TellCountofEmployee()<<std::endl;

    return(0);
}

void Employee :: SetId(int ID)
{
    id = ID;
    std::cout<<"ID of this employee is "<<id<<std::endl;
    count++;
}


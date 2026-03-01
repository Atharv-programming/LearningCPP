/*
    Author : Atharv Anil Ambekar
    Date : 1st March 2026
    Purpose : learning about STL (Maps)
*/
#include<iostream>
#include<map>
#include<string>

template <class T1, class T2>
void display(std::map<T1, T2> &m);

int main(void)
{
    std::map<std::string, int> m1;

    // Filling values in map
    m1["Atharv"] = 89;
    m1["Karan"] = 87;
    m1["Shantanu"] = 99;

    m1.insert({{"Prathamesh", 97}, {"Kiran", 100}});

    std::cout<<"==================================="<<std::endl;
    std::cout<<"Map : "<<std::endl;
    display(m1);
    std::cout<<"==================================="<<std::endl;

    std::cout<<"Size of Map is : "<<m1.size();

    return(0);
}

template <class T1, class T2>
void display(std::map<T1, T2> &m)
{
    std::map<T1, T2>:: iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)
    {
        std::cout<<(*iter).first<<" "<<(*iter).second<<std::endl;
    }
    
}
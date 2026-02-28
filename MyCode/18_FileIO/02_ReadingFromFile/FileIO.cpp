/*
    Author : Atharv Anil Ambekar
    Date : 28th Feb 2026
    Purpose : learning about File I/O (Writting into File)
*/
#include<iostream>
#include<fstream>
#include<string>

int main(void)
{
    std::ifstream in;
    in.open("abc.txt");

    std::string st1;
    std::string st2;

    in>>st1;
    std::cout<<"using '>>' : "<<st1<<std::endl;

    in.seekg(0); // Moves the file pointer again to the first place

    getline(in, st2);
    std::cout<<"using 'getline()' : "<<st2<<std::endl;

    in.close();

    return(0);
}
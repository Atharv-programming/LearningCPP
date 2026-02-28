/*
    Author : Atharv Anil Ambekar
    Date : 28th Feb 2026
    Purpose : learning about File I/O (Writting into File)
*/
#include<iostream>
#include<fstream>

int main(void)
{
    std::ofstream out;
    out.open("abc.txt");

    std::string st = "Atharva Was Here...";

    out<<st;

    out.close();

    return(0);
}
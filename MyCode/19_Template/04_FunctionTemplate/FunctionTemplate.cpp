/*
    Author : Atharv Anil Ambekar
    Date : 28th Feb 2026
    Purpose : learning about Template (Function Template)
*/
#include<iostream>

template <class T>
void swap(T* a, T*b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 5, y = 8;

    std::cout<<"Before Swapping : x = "<<x<<" y = "<<y<<std::endl;
    swap(&x, &y);
    std::cout<<"After Swapping : x = "<<x<<" y = "<<y<<std::endl;

    return(0);
}
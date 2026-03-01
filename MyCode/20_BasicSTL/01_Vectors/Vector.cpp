/*
    Author : Atharv Anil Ambekar
    Date : 1st March 2026
    Purpose : learning about STL (vector)
*/
#include<iostream>
#include<vector>

template <class T>
void display(std::vector<T> &vec);

int main(void)
{
    // Ways to declare Vector
    std::vector<int> vec1; // vector with zero length
    std::vector<int> vec2(4); // vector with length 4
    std::vector<int> vec3(6, 2); // vector with length 6 and all member initialized with 2

    int NoOfElement, element;
    std::cout<<"Enter no of elements in vector : ";
    std::cin>>NoOfElement;

    for (int i = 0; i < NoOfElement; i++)
    {
        std::cout<<"Enter value to be inserted in vector : ";
        std::cin>>element;
        vec1.push_back(element); 
    }
    
    std::cout<<"==================================="<<std::endl;

    std::cout<<"Displaying The vector: "<<std::endl;
    display(vec1);

    std::cout<<"==================================="<<std::endl;

    vec1.pop_back(); // removes the last element
    std::cout<<"Displaying after using pop_back() : "<<std::endl;
    display(vec1);

    std::cout<<"==================================="<<std::endl;

    std::vector<int>::iterator iter = vec1.begin(); // creating an iterator to point element in vector. Now pointing at 0th element of vector
    vec1.insert(iter+1, 2, 0); // [1] Where to insert value [2] How many times [3] What Value 
    std::cout<<"Displaying after using insert() : "<<std::endl;
    display(vec1);

    std::cout<<"==================================="<<std::endl;

    return(0);
}

template <class T>
void display(std::vector<T> &vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        std::cout<<vec[i]<<" ";
    }
    std::cout<<std::endl;
}


// For more Feature => cplusplus.com vector
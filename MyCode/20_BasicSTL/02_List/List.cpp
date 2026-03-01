/*
    Author : Atharv Anil Ambekar
    Date : 1st March 2026
    Purpose : learning about STL (List)
*/
#include<iostream>
#include<List>

template <class T>
void display(std::list<T> &lst);

int main(void)
{
    // Ways to declare lists
    std::list<int> l1; // list with 0 length
    std::list<int> l2(7); // list with length 7

    // Ways to fill values in List Manually
    l1.push_back(8);
    l1.push_back(4);
    l1.push_front(12);
    l1.push_back(0);
    l1.push_back(5);

    std::list<int>::iterator iter;
    iter = l2.begin();
    *iter = 3;
    iter++;
    *iter = 9;
    iter++;
    *iter = 7;



    std::cout<<"================================="<<std::endl;
    
    std::cout<<"List : ";
    display(l1);
    
    std::cout<<"================================="<<std::endl;
    
    l1.reverse();
    std::cout<<"List after reverse() : ";
    display(l1);
    
    std::cout<<"================================="<<std::endl;
    
    l1.sort();
    std::cout<<"List after sort() : ";
    display(l1);
    
    std::cout<<"================================="<<std::endl;

    l1.pop_back();
    std::cout<<"List after pop_back() : ";
    display(l1);

    std::cout<<"================================="<<std::endl;

    l1.pop_front();
    std::cout<<"List after pop_front() : ";
    display(l1);

    std::cout<<"================================="<<std::endl;

    l1.remove(4);
    std::cout<<"List after remove(4) : ";
    display(l1);

    std::cout<<"================================="<<std::endl;
    
    std::cout<<"List 1 : ";
    display(l1);
    std::cout<<"List 2 : ";
    display(l2);
    
    l1.merge(l2);
    std::cout<<"l2 merged into l1 : ";
    display(l1);
    
    std::cout<<"================================="<<std::endl;
    
    return(0);
}

template <class T>
void display(std::list<T> &lst)
{
    std::list<int>:: iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        std::cout<<*it<<" ";
    }
    std::cout<<std::endl;
}

// for more features => cplusplus.com list
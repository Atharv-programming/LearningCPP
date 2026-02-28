/*
    Author : Atharv Anil Ambekar
    Date : 28th Feb 2026
    Purpose : learning about Template (Class Template)
*/
#include<iostream>

template <class T>
class vector
{
    public :
        T * arr;
        int num;

        vector(int a)
        {
            num = a;
            arr = new T[num];
        }

        T dotProduct(vector * pVector)
        {
            T temp = T{}; // Initializing with Zero
            for (int i = 0; i < num; i++)
            {
                temp = temp + (this->arr[i] * pVector->arr[i]);
            }
            
            return(temp);
        }
};

int main(void)
{
    // Int Vector 
    vector<int> v1(3);
    v1.arr[0] = 4;
    v1.arr[1] = 1;
    v1.arr[2] = 6;

    vector<int> v2(3);
    v2.arr[0] = 3;
    v2.arr[1] = 7;
    v2.arr[2] = 1;

    std::cout<<"Addition of int vector v1 and v2 : "<<v1.dotProduct(&v2)<<std::endl;

    // Float Vector 
    vector<float> v3(3);
    v3.arr[0] = 3.5f;
    v3.arr[1] = 0.8f;
    v3.arr[2] = 1.4f;

    vector<float> v4(3);
    v4.arr[0] = 2.4f;
    v4.arr[1] = 7.5f;
    v4.arr[2] = 0.9f;

    std::cout<<"Addition of float vector v3 and v4 : "<<v3.dotProduct(&v4)<<std::endl;

    return(0);
}
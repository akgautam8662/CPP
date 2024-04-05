// 23. Write a C++ program to calculate the sum of all even and odd numbers in an array.

#include<iostream>
using namespace std;
int main()
{
    int size =5;
    int num[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Number : ";
        cin>>num[i];
    }
    cout<<"The array element are : ";
    for (int i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
    
    return 0;
}
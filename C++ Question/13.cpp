// 13. Write a C++ Program to Check Whether a Number is a Positive , Negative Number or Zero.

#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"Enter Any Number :- ";
    cin>>i;
    if (i>0)
    {
        cout<<"The Given Number is Positive";
    }
    else if (i<0)
    {
        cout<<"The Given Number is Negative";
    }
    else{
        cout<<"The Given Number is Zero";
    }
    
    return 0;
}
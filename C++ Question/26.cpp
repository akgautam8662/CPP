// 26.Write a program in C++ to display n terms of natural numbers and their sum.

#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0;
    cout<<"Enter Number :" ;
    cin>>n;

    cout<<"The natural numbers upto "<<n<<"th terms are : ";
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<"\nThe sum of the natural numbers is :";
    cout<<sum;
    return 0;
}
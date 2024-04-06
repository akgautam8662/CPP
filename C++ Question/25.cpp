// 25.Write a program in C++ to find the sum of the first 10 natural numbers.

#include<iostream>
using namespace std;
int main()
{
    int n=10,sum=0;
    cout <<"The natural numbers are: \n";
    for (int i = 1; i <=n; i++)
    {
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<"\nThe sum of first 10 natural numbers : "<<sum;
    return 0;
}
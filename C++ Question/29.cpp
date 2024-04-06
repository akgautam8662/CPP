// 29.Write a program in C++ to find the factorial of a number.

#include<iostream>
using namespace std;
int main()
{
    int n,ans=1;
    cout<<"Enter Number : ";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        ans=ans*i;
    }
    cout<<"The factorial of the given number is: "<<ans;
    
    return 0;
}
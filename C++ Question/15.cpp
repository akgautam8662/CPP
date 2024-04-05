// 15. C++ Program To Check Whether Number is Even Or Odd

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Any Number :- ";
    cin>>num;
    if (num%2==0)
    {
        cout<<"The Given Number is EVEN !";
    }
    else
    {
        cout<<"The Given Number is ODD !";
    }
    
    return 0;
}
// 14. Write a Program to Find the Greatest of the Three Numbers.

#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter First No :- ";
    cin>>num1;
    cout<<"Enter Secound No :- ";
    cin>>num2;
    cout<<"Enter Third No :- ";
    cin>>num3;
    if (num1>num2 && num1>num3)
    {
        cout<<"First Number is Greatest..";
    }
    else if (num2>num3 && num2>num1) 
    {
        cout<<"Secound Number is  Greatest..";
    }
    else{
        cout<<"Third Number is Greatest..";
    }
    return 0;
}
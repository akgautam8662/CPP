// 18. Write a Program to Print Check Whether a Character is an Alphabet or No
#include<iostream>
using namespace std;
int main()
{
    char ch;
    int num;
    cout<<"Enter Alphabet or Number :- ";
    cin>>ch||num;
    if (ch>='a' & ch<='z' || ch>='A' & ch<='Z')
    {
        cout<<"The Given Value is Alphabet ..";
    }
    else if (num>=0 || num<0)
    {
        cout<<"The Given Value is  Number..";
        
    }
    return 0;
}
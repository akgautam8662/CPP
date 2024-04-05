// 17. Write a Program to Check Whether a Character is a Vowel or Consonant

#include<iostream>
using namespace std;

int main()
{
    char ch;
    cout<<"Enter Any Chatacter :- ";
    cin>>ch;
    
    if (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
     cout<<"Character is vowel..";
    }
    else
    {
        cout<<"character is Consonant..";
    }

    return 0;
}
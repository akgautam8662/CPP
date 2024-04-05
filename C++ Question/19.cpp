// 19. Write a Program to Find the Length of the String Without using strlen() Function 

#include<iostream>
using namespace std;
int main()
{
    string str;
    int i;
    cout<<"Enter String :- ";
    cin>>str;
    
    for (i = 0; str[i] != '\0'; i++);
    cout<<"the lenght of string is : "<<i;
    
    return 0;
}
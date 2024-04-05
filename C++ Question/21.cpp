//  21. Write a Program to Count the Number of Vowels 

#include<iostream>
using namespace std;
int main()
{
    string str;
    int count=0;
    cout<<"Enter String :-";
    getline(cin,str);

    for(int i=0; i<str.length();i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    cout<<"The Number of Vowel is :- "<<count;
    return 0;

}
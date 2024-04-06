// User Input :- 
// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

#include<iostream>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter 1st Number : ";
    cin>>num1;
    cout<<"The Given 1st Number is "<<num1<<endl;;

    int num2;
    cout<<"Enter 2nd Number :";
    cin>>num2;
    cout<<"The Given 2nd Number is "<<num2<<endl;;

    int sum=num1+num2;
    cout<<"The Sum is : "<<sum; 

/*
    NOTE---
    
    cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)
    cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)

*/
}
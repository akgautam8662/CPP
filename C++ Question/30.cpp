// 30. Write a program in C++ to find the sum of the digits of a given number.

/*
Sample Output:
Input a number: 1234
The sum of digits of 1234 is: 10
*/

#include<iostream>
using namespace std;
int main()
{
    int n,rem ,sum=0;
    cout<<"Enter any number More Then 1 digit number: ";
    cin>>n;

    while (n>0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    cout<<"The sum of digits of is: "<<sum;
    return 0 ;
}
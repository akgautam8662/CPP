// 12. Write a C++ program to compute the quotient and remainder.

#include<iostream>
using namespace std;
int main ()
{
     int dividend, divisor, quotient, remainder; 

     cout<<"Enter Divident : ";
     cin>>dividend;
     cout<<"Enter Divisor : ";
     cin>>divisor;

     quotient=dividend/divisor;
     remainder=dividend%divisor;

    cout<<"The Quotient is : "<<quotient<<endl;
    cout<<"The Remainder is : "<<remainder<<endl;


    return 0;
}
// 10. Write a C++ program to find the area of any triangle using Heron's formula.

// Heron's formula :-  area = sqrt(s(s-a)(s-b)(s-c))
//                      s = (a+b+c)/2

// s=semi-perimeter
// a =side1
// b = side2 
// c = side3

#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    float a ,b,c, area, s ;

    cout<<"Enter length of 1st side  of the triangle : " ;
    cin>>a;

    cout<<"Enter length of 2st side  of the triangle : " ;
    cin>>b;
    
    cout<<"Enter length of 3st side  of the triangle : " ;
    cin>>c;

    s = (a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"The area of the triangle is : "<<area;
    return 0;
}
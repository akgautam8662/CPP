// 9.Write a C++ program to find the Area and Perimeter of a Rectangle.

// area of rectangle = length × width.
// Perimeter of Rectangle = 2 (Length + Width).


#include<iostream>
using namespace std;
int main()
{
    float len,wid,area,per;
    cout<<"Enter Lenght of Rectangle: ";
    cin>>len;
    cout<<"Enter Width of Rectangle: ";
    cin>>wid;

    area=len*wid;
    per=2*(len+wid);

    cout<<"Area of Rectangle is : "<<area<<endl;
    cout<<"Perimeter of rectangle is : "<<per;

    return 0;
}
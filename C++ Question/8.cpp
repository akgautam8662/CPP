// 8. Write a C++ program that calculates the volume of a sphere.

// The formula for the volume of a sphere is V = 4/3 πr³

#include<iostream>
using namespace std;
int main()
{
    float pi=3.14,r,vol;
    cout<<"Input the radius of sphare : ";
    cin>>r;
    
    vol= (4*pi*r*r*r)/3;
    cout<<"The volume of a sphere is :"<<vol;
    return 0 ;
}

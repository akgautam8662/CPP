// VARIABLES 

// Variables are containers for storing data values.
/*
int - stores integers (whole numbers), without decimals, such as 123 or -123
double - stores floating point numbers, with decimals, such as 19.99 or -19.99
char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string - stores text, such as "Hello World". String values are surrounded by double quotes
bool - stores values with two states: true or false
*/

#include<iostream>
using namespace std;
int main()
{
    // Declaring (Creating) Variables
    int myNum = 25;               // Integer (whole number without decimals)
    double myFloatNum = 3.14;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

cout<<endl;
    // Display Variables
    cout<<myText<<" My name is Jone and my age is "<<myNum<<endl;
    cout<<"The value of pi is "<<myFloatNum<<endl; 

cout<<endl;
    // Add Variables Together
    int a=4;
    int b =12;
    int sum=a+b;
    cout<<sum;   

cout<<endl;
    // Declare Many Variables
    int x=1,y=12,z=30;
    cout<<x<<" "<<y<<" "<<z;
cout<<endl;
    int p,q,r;
    p=q=r=40;
    cout<<p+q+r;
}
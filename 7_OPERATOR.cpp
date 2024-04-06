// Operators are used to perform operations on variables and values.

#include<iostream>
using namespace std;
int main()
{
    int a=6,b=3;
// (i) Arithmetic Operators
    cout<<a + b <<endl;
    cout<<a - b <<endl;
    cout<<a * b <<endl;
    cout<<a / b <<endl;
    cout<<a % b <<endl;
    cout<<a++ <<endl;   
    cout<<a-- <<endl;
    cout<<++b <<endl;
    cout<<--b<<endl;

// (ii) Assignment Operators
    int x=10;
    x += 4;         //14
    cout<<x<<endl;
    x -= 4;         //10
    cout<<x<<endl;
    x *= 5;         //50
    cout<<x<<endl;
    x /= 5;         //10
    cout<<x<<endl;
    x %= 5;         //0
    cout<<x<<endl;
    //  &=      AND OPERATOR  
        
    //  |=       OR OPERATOR    

    //  ^=       XOR OPERATOR

    // >> right shift
    // << left shift

// (iii) Comparison Operators



// (iv) Logical Operators

    return 0;
}
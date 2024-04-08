// Conditions :-
/*
Less than: a < b
Less than or equal to: a <= b
Greater than: a > b
Greater than or equal to: a >= b
Equal to a == b
Not Equal to: a != b
*/

#include<iostream>
using namespace std;
int main()
{
// If Statements
    if (50>10)
    // Note that if is in lowercase letters. Uppercase letters (If or IF) will generate an error.
    {
        cout<<"Yes" <<endl;       /* executed if the condition is true */
    }

// else Statements
    int x ,y;
    cout<<"Enter value x : ";
    cin>>x;
    cout<<"Enter value y : ";
    cin>>y;
    if (x>y)
    {
       cout<<"Yes";       //ye true hoga to ye execute hoga ..
    }
    else
    {
        cout<<"No";       // nhi to ye false wala excete hoga..
    }
// else if Statement
// Use the else if statement to specify a new condition if the first condition is false.  
}
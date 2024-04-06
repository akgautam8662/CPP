// Strings are used for storing text.
// A string variable contains a collection of characters surrounded by double quotes.
// To use strings you must include an additional header file   <string>.

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a = "King"; 
    cout<<a<<endl;

// String Concatenation.
// + opertor is use between to string to add and make a new string.. 

    string firstname = "Donald";
    string lastname = "Trump";

    string fullname =firstname + lastname;  //print without space..
    cout<<fullname<<endl;

    string fullname2 =firstname +" "+ lastname;  //we can also cnoncatenate by using " " or ''..
    cout<<fullname2<<endl;

    // We can also concatenate strings with the append() function.
    string fullname3=firstname.append(lastname);
    cout<<fullname3<<endl;

// String Length
// To get the length of a string, use the length() function..

cout<<firstname.length()<<endl;
cout<<firstname.size()<<endl;
// Both Give the same output .It is completely up to you if you want to use length() or size().


// Access Strings: 
cout<<firstname[0]<<endl;
cout<<firstname[1]<<endl;

// Change String Characters
firstname[0] = 'T';
cout<<firstname;
}

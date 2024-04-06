// DATA TYPES :-

#include<iostream>
#include <string>  // for use string data tpye 
using namespace std;
int main()
{
    int myNum = 5;               // Integer (whole number)
    float myFloatNum = 5.99;     // Floating point number
    double myDoubleNum = 9.98;   // Floating point number
    char myLetter = 'D';         // Character
    bool myBoolean = true;       // Boolean
    string myText = "Hello";     // String

    cout<<myNum<<" | " << myFloatNum<<" | " <<myText<<endl;
   
// finding which type of data type
    //we use --> typeid(var_name).name()
    cout<<typeid(myNum).name()<<endl;     //i  for interger..
    cout<<typeid(myLetter).name()<<endl;       //  c for char 
     cout<<typeid(myText).name()<<endl;

     return 0;
}
// 7. Write a C++ program that swaps two numbers.
/*
Sample Output:

Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25
*/

 #include<iostream>
 using namespace std;
 int main()
 {
    int a,b;
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Secound Number : ";
    cin>>b;

    int c =a;
    a=b;
    b=c;
    
    cout<<"After swapping the First number is "<<a <<endl;
    cout<<"After swapping the Secound number is "<<b;
    return 0;
 }
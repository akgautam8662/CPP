// ARRAYS 
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num[5]={1,8,4,5,3};  //Note: Array indexes start with 0: [0] is the first element. [1] is the second element, etc.
    cout<<num[0]<<" ";
    cout<<num[1]<<" ";
    cout<<num[4]<<" ";
cout<<endl;

    string comp[3]={"dell","HP","Apple"};
    cout<<comp[2];
cout<<endl;

// Change an Array Element
    comp[2]="Lenovo";
    cout<<comp[2];
cout<<endl;

// Loop Through an Array
    for (int i = 0; i < 3; i++)
    {
        cout<<comp[i]<<" ";
        // cout<<i<<" = "<<comp[i]<<endl;  
    }
    
    return 0;
}

// 22. Write a C++ program to print Table of any number ..
/*
Sample Output:
Input a number: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
*/

#include<iostream>
using namespace std;
int main()
{
    int n,ans;
    cout<<"Enter any number : ";
    cin>>n;

    for (int i = 1; i<=10; i++)
    {
        ans=n*i;
        cout<<n<<" X "<<i<<" = "<<ans<<endl;
    }   
    return 0;
}
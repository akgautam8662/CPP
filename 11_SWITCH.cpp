// SWITCH CASE STATEMENT :-


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Any number : ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"First Case ";
        break;
    case 2:
        cout<<"Secound Case ";
        break;
    default:    //Defult case is not compulsory
        cout<<"Defult Value";
        break;
    }
    cout<<endl;
// Jo Given expression  case k constant se match ho rha hai wo case execute  ho ja rha hai. 
// or agr koi expression match na kre to default case me ya to switch statement k bahr aajaega.

// Calculate Program using Switch satatement
    cout<<"-------Calculater Program------"<<endl;
    int a,b;
    char oper;
    cout<<"Enter First value: ";
    cin>>a;
    cout<<"Enter secound value: ";
    cin>>b;
    cout<<"Enter operation you want to perform : ";
    cin>>oper;

    switch(oper)
    {
    case '+' :
        cout<<a+b;
        break;
    case '-' :
        cout<<a-b;
        break;
    case '*' :
        cout<<a*b;
        break;
    case '/': 
        cout<<a/b;
        break;
    case '%' :
        cout<<a%b;
        break;
    default :
        cout<<"Invalid Operater...";
        break;
    }
}
#include<iostream>
using namespace std;
int factorial(int a)
{
    if(a==0 || a==1)
    {
        return(1);
    }
    else
    return(a*factorial(a-1));
}
int main()
{
    int a;
    cout<<"enter a number: ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return(0);
}

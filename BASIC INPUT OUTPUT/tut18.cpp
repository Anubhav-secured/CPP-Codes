#include<iostream>
using namespace std;
// int factorial( int n)
// {
//     if(n<=1)
//     {
//         return(1);
//     }
//     return(n*factorial(n-1));
// }
int fib(int n)
{    
    if(n<2)
    {
        return(1);
    }
    return(fib(n-1)+fib(n-2));
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    // cout<<"the factorial of "<<n<<" is "<<factorial(n)<<endl;
    cout<<"the term in fibonacci series in position "<<n<<" is "<<fib(n)<<endl;

    return(0);
}
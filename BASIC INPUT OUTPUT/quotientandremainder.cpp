#include<iostream>
using namespace std;
int main()
{
    int  dividend , divisor;
    float q,r;
    cout<<"enter the dividend and divisor"<<endl;
    cin>>dividend>>divisor;
    q=dividend/divisor;
    r=dividend %divisor;

    cout<<"the remainder is: "<<r<<endl
    <<"the quotient is: "<<q<<endl;
    return(0);
}
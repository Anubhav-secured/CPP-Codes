#include<iostream>
using namespace std;
int sum(int,int);
void g(void);
int main()
{
    int num1,num2,c;
    cout<<"enter the value of num1 and num2 "<<endl;
    cin>>num1>>num2;
    c=sum(num1,num2);
    cout<<"the value of num1+num2 is "<<c<<endl;
    g();
    return(0);
}
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
void g(void)
{
    cout<<"hello! good morning"<<endl;
}
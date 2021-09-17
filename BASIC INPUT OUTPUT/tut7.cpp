#include<iostream>
int c=45;
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c=(a+b);
    cout<<"The value of sum is: "<<c<<endl;
    cout<<"the value of global c is: "<<::c;
    
    //***********typecasting**********
    int a=45;
    float b=45.46f ;
    cout<<"the value of a+b is: "<<(a+b)<<endl;
    cout<<"the value of a+int(b) is: "<<(a+int(b))<<endl;
    cout<<"the value of a+(int)b is: "<<(a+(int)b)<<endl;
    return(0);
}
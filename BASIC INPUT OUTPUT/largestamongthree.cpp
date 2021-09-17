#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter three number"<<endl;
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    {
        cout<<"greatest number is "<<a<<endl;
    }
    else if(b>c)
    {
        cout<<"greatest number is "<<b<<endl;
    }
    else
    {
      cout<<"greatest number is "<<c<<endl;  
    }
    return(0);
}

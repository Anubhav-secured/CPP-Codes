#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c,D,x1,x2,rp,imgp;
    cout<<"enter the value of a b and c"<<endl;
    cin>>a>>b>>c;
    D=(b*b-4*a*c);
    if(D>0)
    {
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        cout<<"roots are: "<<x1<<" "<<x2<<endl;
    }
    else if(D==0)
    {
        x1=x2=-b/(2*a);
        cout<<"both roots are equal"<<endl;
        cout<<"the roots are: "<<x1<<" "<<x1<<endl;
    }
    else
    {
        rp=-b/(2*a);
        imgp=sqrt(-D/(2*a));
       
        cout<<"roots are complex"<<rp<<" + "<< imgp <<" i "<<endl;
        cout<<"roots are complex"<<rp<<" - "<< imgp <<" i "<<endl;
    }
    return(0);
}
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter two number a and b "<<endl;
    cin>>a>>b;;
    cout<<"the value of a and b before swap is: "<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"the values after swapping are "<<a<<" "<<b<<endl;
    return(0);
}

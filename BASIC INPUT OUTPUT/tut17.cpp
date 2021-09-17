#include<iostream>
using namespace std;

// void swap(int a,int b)
// {
//     int temp=a;
//     a=b;
//     b=temp;
// }

void swappointer(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void swaprefrence(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
float moneyreceived(int currentmoney,float factor=1.04 )
{
    return(currentmoney*factor);
}
int main()
{
    int x,y;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<"enter the value of y: ";
    cin>>y;
    cout<<"before swap\nthe value x is  "<<x<<"\nthe value of y is "<<y<<endl;
    //swap(x,y);
    //cout<<"the value x is  "<<x<<"\nthe value of y is "<<y<<endl;
    // swappointer(&a,&b);
    // cout<<"the value a is  "<<a<<"\nthe value of b is "<<b<<endl;
    swaprefrence(x,y);
    cout<<"after swap\nthe value x is  "<<x<<"\nthe value of y is "<<y<<endl;
    int money=100000;
    cout<<"if you have "<<money<<" in your bank account then you will recieve "<<moneyreceived(money)<<" after 1 year"<<endl;
    cout<<" for VIP: if you have "<<money<<" in your bank account then you will recieve "<<moneyreceived(money,1.1)<<" after 1 year"<<endl;

    return(0);
}
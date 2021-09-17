#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter year"<<endl;
    cin>>year;
    if((year%400==0)||(year%4==0 && year%100!=0))
    {
        cout<<year<<" is leap year"<<endl;
    }
    else
    {
        cout<<year<<" is Common year"<<endl;
    }
    return(0);
}

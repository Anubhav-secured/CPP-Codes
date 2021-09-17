#include<iostream>
using namespace std;
int main()
{
    int t1=0,t2=1,t3,next_term,n;
    next_term=t1+t2;
    cout<<"enter the number of terms ";
    cin>>n;
    cout<<t1<<" "<<t2<<" ";
    for(int i=0;i<=n;i++)
    {
        cout<<next_term<<" ";
        t1=t2;
        t2=next_term;
        next_term=t1+t2;
    }
    
    return(0);
}
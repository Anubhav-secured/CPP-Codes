#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter n to find sum";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<"Sum of "<<n<<" natural number is: "<<sum<<endl;
    return(0);
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number to find its multiplication table: ";
    cin>>n;
    for(int i=0;i<10;i++)
    {
        cout<<n<<" * "<<i+1<<" = "<<n*(i+1)<<endl;
    }
    return(0);
}
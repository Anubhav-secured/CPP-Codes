#include<iostream>
using namespace std;
int main()
{
    
    int age;
    cout<<"tell me your age: ";
    cin>>age;

    if((age>0) && (age<18))
    {
        cout<<"you can not come to party"<<endl;
    }
    else if(age==18)
    {
        cout<<"you are a kid you can get a kid pass to come into party"<<endl;
    }
    else if(age<1)
    {
        cout<<"you are not yet born "<<endl;

    }
    else{
        cout<<"you can come into the party"<<endl;
    }
    return(0);
}
#include<iostream>
using namespace std;
int count=0;
class num
{
    public :
    num()
    {
         count++;
         cout<<"this is the time when constructor is called for object number"<<count<<endl;
    }
    ~num()
    {
        count++;
        cout<<"this is the time when destructor is called for object number"<<count<<endl;
    }
   

};

int main()
{
    cout<<"we are in  main function"<<endl;
    cout<<"creating the first object n1"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"creating two more objects"<<endl;
        num n2,n3;
        cout<<"existing this block"<<endl;
    }
    cout<<"back to main"<<endl;
    return(0);
}
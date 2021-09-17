//copy constructors
#include<iostream>
using namespace std;
class number
{
    int a;
    public:
    number()
    {
        a=0;
    }
    number (int num)
    {
        a=num;
    }
    //whwn no copy constructor is found compiler supplies its own copy constructor
    // number (number &obj)
    // {
    //     cout<<"copy constructors called!!!"<<endl;
    //     a=obj.a;
    // }
    void display()
    {
        cout<<"the number for this object is "<<a<<endl;

    }
    
};
int main()
{
    number x,y,z(45);
    x.display();
    y.display();
    z.display();
    number z1(x);
    z1.display();
    return(0);
}
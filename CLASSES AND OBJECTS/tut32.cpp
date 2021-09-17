// default arguments in constructors
#include<iostream>
using namespace std;
class simple
{
    int data1,data2,data3;
    public:
    simple(int a,int b=9,int c=8)
    {
        data1=a;
        data2=b;
        data3=c;
    }
    void display(void)
    {
        cout<<"the value of data is "<<data1<<" and "<<data2<<" and "<<data3<<endl;
    }

};
int main()
{
    simple s(1,4);
    s.display();
    
    simple s2(1);
    s2.display();

    simple s3(5,6);
    s3.display();
    return(0);
}
#include<iostream>
using namespace std;
class complex
{
    int real,img;
    public:
    void setdata(int a,int b)
    {
        real=a;
        img=b;
    }
    void printdata(void)
    {
        cout<<"Real part is: "<<real<<endl;
        cout<<"img part is: "<<img<<endl;
    }
};
int main()
{
    // complex c1;
    // complex *ptr=&c1; 
    complex *ptr=new complex[3];
    // (*ptr).setdata(5,6);
    ptr->setdata(5,6);

    // (*ptr).printdata();
    ptr->printdata();
    return(0);
}
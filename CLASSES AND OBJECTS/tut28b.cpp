#include<iostream>
using namespace std;
class c2;
class c1
{
    int val1;
        friend void exchange(c1 &,c2 &);
    public: 
    
        void indata(int a)
        {
            val1=a;
        }
        void display(void)
        {
            cout<<"the value of x is: "<<val1<<endl;
        }
    
};
class c2{
    int val2;
        friend void exchange(c1 &,c2 &);
    public: 
    
        void indata(int b)
        {
            val2=b;
        }
        void display(void)
        {
            cout<<"the value of y is: "<<val2<<endl;
        }
    
};
void exchange(c1 &x,c2 &y)
{
    int temp=x.val1;
    x.val1=y.val2;
    y.val2=temp;
}
int main()
{
    c1 x;
    c2 y;
    x.indata(34);
    x.display();
    y.indata(68);
    y.display();
    exchange(x,y);
    cout<<"the value x after exchange becomes"<<endl;
    x.display();
    cout<<"the value y after exchange becomes"<<endl;
    y.display();

    return(0);
}
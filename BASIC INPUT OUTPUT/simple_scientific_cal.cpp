#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator
{
    private:
    int a,b;
    public:
    void setdata(void)
    {
        cout<<"enter the value a: ";
        cin>>a;
        cout<<"enter the value b: ";
        cin>>b;
    }
    void performOperations(void)
    {
        cout<<"The value of a+b is: "<<a+b<<endl;
        cout<<"The value of a-b is: "<<a-b<<endl;
        cout<<"The value of a*b is: "<<a*b<<endl;
        cout<<"The value of a/b is: "<<(float)a/b<<endl;
    }
};
class scientificcalculator
{
    private:
    int a,b;
    public:
    void setdata(void)
    {
        cout<<"enter the value a: ";
        cin>>a;
        cout<<"enter the value b: ";
        cin>>b;
    }
    void performOperations(void)
    {
        cout<<"The value of cos(a) is: "<<cos(a)<<endl;
        cout<<"The value of sin(a) is: "<<sin(a)<<endl;
        cout<<"The value of exp(a) is: "<<exp(a)<<endl;
        cout<<"The value of tan(a) is: "<<tan(a)<<endl;
    }
};
class hybridcalculator: public simplecalculator,public scientificcalculator
{
    
};
int main()
{
    simplecalculator cal;
    cal.setdata();
    cal.performOperations();
    scientificcalculator cal1;
    cal1.setdata();
    cal1.performOperations();
    return(0);
}
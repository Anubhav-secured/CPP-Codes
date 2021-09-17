#include<iostream>
using namespace std;
class test
{
    int a,b;
    public:
    // test(int i,int j) : a(i),b(j)----->a will be assigned 1 and b will be assigned 2
    // test(int i,int j) : a(i),b(i+j)--->a will be assigned 1 and b will be assigned (1+2)
    // test(int i,int j) : a(i),b(2*j)--->a will be assigned 1 and b will be assigned (2*2)
    // test(int i,int j) : b(i),a(b+j)---->gives garbage value in place of a 
    // because we have to initialialize a first since a has been declared first
    // test(int i,int j) : a(i),b(a+j)
    test(int i,int j) 
    {
        a=i;
        b=j;
        cout<<"Constructor executed "<<endl;
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};
int main()
{
    test t(1,2);
    return(0);
}
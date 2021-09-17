#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(complex c1, complex c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void printnumber()
    {

        cout<< " the value of complex number is " << a << "+" << b << "i" << endl;
            
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printnumber();
    c2.setdata(3, 4);
    c2.printnumber();
    c3.setdatabysum(c1, c2);
    c3.printnumber();
    return (0);
}
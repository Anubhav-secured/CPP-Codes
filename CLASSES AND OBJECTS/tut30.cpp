#include<iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex( int x,int y);  

    void display(void)
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
   
};
complex::complex(int x,int y)  // this is a parameterized comnstructer as it accepts two parameter as an arguments
{
    a = x;
    b = y;
}
int main()
{
   // implicit call
   complex c(4,6); 
   c.display();

   //explicit call
   complex d=complex(5,7);
   d.display();
    return(0);
}
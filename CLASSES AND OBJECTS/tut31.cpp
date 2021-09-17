// constructer overloading
#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    void display(void)
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
};
int main()
{
    complex c(1, 2);
    c.display();

    complex d(5);
    d.display();

    complex e;
    e.display();
    return (0);
}
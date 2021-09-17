#include <iostream>
using namespace std;
class complex
{
    int a, b;

public:
    // creating a constructer 
    // construcetr is a special fuction with the same name as of class
    // it is used to initialize the objects of its class 
    // it is automatically invoked when an object is created

    complex(void);   //default constucter

    void display(void)
    {
        cout << "your number is " << a << "+" << b << "i" << endl;
    }
    //conctructer declaration
};
complex::complex(void)  // this is a defult comnstructer 
{
    a = 0;
    b = 0;
}
int main()
{
    complex a;
    a.display();
    return (0);
}

// charactersticks of constructer

/*
1. it should be declared in the public section of the class 
2. it is automatically invoked when an object is created 
3. they can not return values and Do not have return types 
4. it can have default arguments 
5. we can not refer their adress 
*/
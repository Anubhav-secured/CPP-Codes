#include<iostream>
using namespace std;
int main()
{
    //concept of pointers
    //ponters are datqatypes which stores the adress of other variables

    int a=3;
    int *b=&a;
    cout<<b<<endl;
    //&----> is the (adress of) operator
    
    cout<<"the adress of a is: "<<&a<<endl;
    cout<<"the adress of a is: "<<b<<endl;

    // * --->  (value at) derefrenceoperator
    cout<<"the value at adress of b is: "<<*b<<endl;

    //pointer to pointer 
    int **c=&b;
    cout<<"the adress of b is: "<<&b<<endl;
    cout<<"the adress of b is: "<<c<<endl;
    cout<<"the value at adress c is: "<<*c<<endl;
    cout<<"the value at adress value_at(value_at(c)) is: "<<**c<<endl;

    return(0);
}
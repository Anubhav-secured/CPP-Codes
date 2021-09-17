#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printnumber(void)
    {
        cout << "the complex number is " << a << "+" << b << "i" << endl;
    }
    friend complex sumcomplex(complex o1, complex o2);
};
/* 
below line means that non memeber sumcomplex functionis allowed to do anything 
with private variable of complex class
*/
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return (o3);
}
int main()
{
    complex c1, c2, sum;
    c1.setnumber(1, 4);
    c1.printnumber();
    c2.setnumber(5, 8);
    c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return (0);

    /*properties of friend funcion 
    --> not in the scope of class
    --> since it is not in the scope of class so it cannot be called by the object of that class.
         so c1.sumcomplex()== invalid
    --> can be invoked withot help of any object 
    --> usually contains the objects as arguments 
    --> it can be declared inside public or private section of class 
    --> it can not the members directly by their names and needs object_name.member_name
        to access any member. 
    --> 
    */
}
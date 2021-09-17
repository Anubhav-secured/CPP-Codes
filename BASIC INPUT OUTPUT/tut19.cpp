/******** FUNCTION OVERLOADING*********/
#include<iostream>
using namespace std;
int sum(int a,int b)
{
    cout<<"using function with two argument"<<endl;
    return(a+b);
}
int sum(int a,int b,int c )
{
    cout<<"using function with three argument"<<endl;
    return(a+b+c);
}
int volume(double r,int h)
{
    return(3.14*r*r*h);
}
int volume(int a)
{
    return(a*a*a);
}
int volume(int l,int b,int h)
{
    return(l*b*h);
}
int main()
{
    cout<<"the sum of 2 and 3 is "<<sum(2,3)<<"\nand the sum of 3 6 7 is "<<sum(3,6,7)<<endl;
    cout<<"the volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"the volume of cylinder of radius 3 and height 6 is "<<volume(3,6)<<endl;
    cout<<"the volume of cuboid of length breadth 7 and height 6 is "<<volume(3,7,6)<<endl;
    return(0);
}
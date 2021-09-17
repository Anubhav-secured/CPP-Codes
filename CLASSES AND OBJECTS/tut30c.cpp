// program to calculate distance between two points 
// hint create a function(make it as friend function) which takes two objects of point class 
// and computes the distance between these two points 
#include<iostream>
#include<cmath>
using namespace std;

class point
{
    int x,y;
    public:
    point(int a,int b)
    {
        x=a;
        y=b;
    }
     void displaypoint(void)
    {
        cout<<"the value of point is ("<<x<<","<<y<<")"<<endl;
    }
    friend float distance(point p1,point p2);
};
float distance(point p1,point p2)
{
    float d=sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
    return(d);
}

int main()
{
    point p1(1,1);
    p1.displaypoint();
    point p2(2,2);
    p2.displaypoint();
    float dis=distance(p1,p2);
    cout<<"the value of distance between point p1 and p2 is:"<<dis<<endl; 
    return(0);
}
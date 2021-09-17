#include<iostream>
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
};
int main()
{
    point p(2,4);
    p.displaypoint();
    point q(5,6);
    q.displaypoint();
    return(0);
}
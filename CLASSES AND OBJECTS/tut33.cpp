// dynamic iniatialization of objects using constructors
#include<iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int year;
    float rateofintrest;
    float returnvalue;
    public :
    bankdeposit(){ }
    bankdeposit(int p,int y,int r);
    bankdeposit(int p,int y,float R);
    void show();
};
bankdeposit::bankdeposit(int p,int y,float r)
{
    principal=p;
    year=y;
    rateofintrest=r;
    returnvalue=principal;
    for ( int i = 0; i < year; i++)
    {
        returnvalue*=(1+rateofintrest);
    }
    
}
bankdeposit::bankdeposit(int p,int y,int R)
{
    principal=p;
    year =y;
    rateofintrest=float(R)/100;
    returnvalue=principal;
    for ( int i = 0; i < year; i++)
    {
        returnvalue*=(1+rateofintrest);
    }
    
}
void bankdeposit::show()
{
    cout<<"the principal amount was "<<principal<<" and the amount after "<<year<<" is "<<returnvalue<<endl;
}
int main()
{
    bankdeposit bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the value of principal, year and rateofintrest"<<endl;
    cin>>p>>y>>r;
    bd1=bankdeposit(p,y,r);
    bd1.show();

    cout<<"enter the value of principal, year and rateofintrest"<<endl;
    cin>>p>>y>>R;
    bd2=bankdeposit(p,y,R);
    bd2.show();

    //bd3.show(); // gives garbage value
    return(0);
} 
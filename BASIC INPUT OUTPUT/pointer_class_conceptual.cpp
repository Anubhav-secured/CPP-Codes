#include<iostream>
using namespace std;
class shopitem
{
    int id;
    float price;
    public:
    void setdata(int a,float b)
    {
        id=a;
        price=b;
    }
    void printdata(void)
    {
        cout<<"Code of item is "<<id<<endl;
        cout<<"Price of item is "<<price<<endl;
    }
};
int main()
{
    int size=3;
    int p;
    float q;
    // int *ptr=&size;
    // int *ptr=new int[34];
    shopitem *ptr=new shopitem[size];
    shopitem *tempptr=ptr;

    for(int i=0;i<size;i++)
    {
        cout<<"Enter the id and price of item no "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout<<"Item number: "<<j+1<<endl;
        tempptr->printdata();
        tempptr++;
    }
    
    return(0);
}
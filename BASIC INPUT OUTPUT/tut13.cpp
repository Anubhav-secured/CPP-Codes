#include<iostream>
using namespace std;
int main()
{
    int mark[4]={23,45,56,89};


    int mathmark[4];

    mathmark[0]=70;
    mathmark[1]=80;
    mathmark[2]=95;
    mathmark[3]=99;

    cout<<"these are math marks "<<endl;

    cout<<"mathmark[0]: "<<mathmark[0]<<endl;
    cout<<"mathmark[1]: "<<mathmark[1]<<endl;
    cout<<"mathmark[2]: "<<mathmark[2]<<endl;
    cout<<"mathmark[3]: "<<mathmark[3]<<endl;

     cout<<"these are marks "<<endl;
    // cout<<"mark[0]: "<<mark[0]<<endl;
    // cout<<"mark[1]: "<<mark[1]<<endl;
    // cout<<"mark[2]: "<<mark[2]<<endl;
    // cout<<"mark[3]: "<<mark[3]<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"the value of mark"<<i<<"is: "<<mark[i]<<endl; 
    }
    
    
    return(0);
}
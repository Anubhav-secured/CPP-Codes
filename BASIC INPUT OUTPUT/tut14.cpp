#include<iostream>
using namespace std;
int main()
{
    int marks[4]={70,80,90,95};
    int i=0;
//     while(i<4)
//     {
//         cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
//         i++;
//     }
// cout<<endl<<endl;
//     int j=0;
//     do
//     {
//        cout<<"the value of marks "<<j<<" is "<<marks[j]<<endl;
//        j++; 
//     }while(j<4);
int *p=marks;
cout<<"the value of marks[0] is "<<*(p)<<endl;
cout<<"the value of marks[1] is "<<*(p+1)<<endl;
cout<<"the value of marks[2] is "<<*(p+2)<<endl;
cout<<"the value of marks[3] is "<<*(p+3)<<endl;
    return(0);
}
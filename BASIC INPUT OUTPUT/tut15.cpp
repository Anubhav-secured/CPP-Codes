// *****examples of structure union and enum ******//
#include<iostream>
using namespace std;
struct employee
{
    int eid;
    char favchar;
    float salary;
};
union money
    {
        int rice;//4 byte
        char car;//1 byte
        float pounds;//4 byte
    };

int main()
{
    struct employee anubhav;
    anubhav.eid=1;
    anubhav.favchar='a';
    anubhav.salary=1200000;
    cout<<"anubhav's salary is "<<anubhav.salary<<endl;
    cout<<"anubhav's favrouite character is "<<anubhav.favchar<<endl;
    cout<<"anubhav's eid is "<<anubhav.eid<<endl<<endl;
    
    
    union money m1;
    m1.rice=10;
    cout<<"money in terms of rice is "<<m1.rice<<endl<<endl;
    
    enum meal{breakfast,lunch,dinner};
    meal m2=breakfast;
    meal m3=lunch;
    meal m4=dinner;
    cout<<m2<<endl;
    cout<<m3<<endl;
    cout<<m4<<endl;
    
    return(0);
}
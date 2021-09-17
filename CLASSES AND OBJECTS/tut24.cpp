#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter your id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is " << id << " and this is employee no " << count << endl;
    }
    static void getcount(void)
    {
        cout<<"the value of count is "<<count<<endl;

    }
};
int employee::count;
int main()
{
    employee anubhav, harry, shubham;
    anubhav.setdata();
    anubhav.getdata();
    employee::getcount();

    harry.setdata();
    harry.getdata();
    employee::getcount();

    shubham.setdata();
    shubham.getdata();
    employee::getcount();
    return (0);
}
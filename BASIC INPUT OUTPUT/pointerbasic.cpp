#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is " << *(ptr) << endl;

    float *p = new float(40.6);
    cout << "The value at adress p is is " << *(p) << endl;

    int *arr = new int[3];

    // arr[0]=*&a[0]=*(arr+0)

    // so we can write as --------->> arr[1]=*(arr+1)=*(&arr[0]+1)

    arr[0] = 10;
    *(arr+1) = 20;
    // arr[1] = 20; ------->we can also write it as *(arr+1)
    arr[2] = 30;
    // delete[] arr;---------->it will delete the memory allocated at arr
    for (int i = 0; i < 3; i++)
    {
        cout << "The value of arr[" << i << "] is " << arr[i] << endl;
    }
    
    return (0);
}
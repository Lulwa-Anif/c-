#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int* ptr=&a;
    cout<<"the value of a is "<<*(ptr)<<endl;
    cout<<"the address of a is"<<ptr<<endl;;
    //new keyword
    int *p= new int(40);
    float* q=new float(50.76);
    cout<<"the value at address p is "<<*(p)<<endl;
    cout<<"the value at address q is "<<*(q)<<endl;

    int *arr= new int[3];
    arr[0]=34;
    arr[1]=67;
    arr[2]=34;
    // delete[] arr;        //delete operator syntex
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    return 0;
}
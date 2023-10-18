#include<iostream>
using namespace std;
int main()
{
    int marks[4]={32,5,76,87};
    int mathmarks[4];
    int i;;
    mathmarks[0]=567;
    mathmarks[1]=789;
    mathmarks[2]=655;
    mathmarks[3]=786;
    cout<<"this are maths marks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<"this are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<"using for loop"<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<marks[i]<<endl;
    }
    //pointers and array
    int* p=marks;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    // array in pointers
    int* h=marks;
    cout<<h;
}
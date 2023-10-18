#include<iostream>
using namespace std;
template<class T1,class T2>

float func_avg(T1 x,T2 y)
{
    float avg=(x+y)/2;
    return avg;
}
template<class T>
    void swaping(T &a,T &b)
    {
       
        T temp=a;
        a=b;
        b=temp;
        // cout<<a<<endl<<b;
    }
int main()
{
    cout<<"the average of two number is "<<func_avg(4,6.7)<<endl;
    int a=3,b=4;
    swaping(a,b);
    cout<<a<<endl<<b;
    // swaping<int>(a,b);
    
    return 0;
}

#include<iostream>
using namespace std;
class A
{
    int a,b;
    public:
    void show(int x,int y)
    {
        a=x;
        b=y;
        cout<<a<<" "<<b<<endl;
    }
    void show(float x,float y)
    {
        a=x;
        b=y;
        cout<<a<<" "<<b<<endl;
    }
};
int main()
{
    A obj,obj2;
    obj.show(5,7);
    // obj2.show(5.5,2.9);
    return 0;
}
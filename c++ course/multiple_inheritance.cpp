#include<iostream>
using namespace std;
class base1
{
    protected:
    int base1;
    public:
    void set_base1(int a)
    {
        base1=a;
    }
};
class base2
{
    protected:
    int base2;
    public:
    void set_base2(int a)
    {
        base2=a;
    }
};
class derive:public base1,public base2
{
    public:
        void show(){
            cout<<"the value of base 1 class is"<<base1<<endl;
            cout<<"the value of base 2 class is"<<base2<<endl;
            cout<<"the value of sum of base 1 class and base2 class is"<<base1+base2<<endl;
    }
    
};
int main()
{
    derive obj;
    obj.set_base1(6);
    obj.set_base2(65);
    obj.show();
}
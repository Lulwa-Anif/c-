#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{
    int a,b;
    public:
    void get_data(){
        cout<<"enetr the value of a"<<endl;
        cin>>a;
        cout<<"enetr the value of b"<<endl;
        cin>>b;
    }
    void perform_operation()
    {
        cout<<"the value of a+b is "<<a+b<<endl;
        cout<<"the value of a-b is "<<a-b<<endl;
        cout<<"the value of a*b is "<<a*b<<endl;
        cout<<"the value of a/b is "<<a/b<<endl;



    }

};
class scientificcalculator
{
    int a,b;
    public:
    void getdata(){
        cout<<"enetr the value of a"<<endl;
        cin>>a;
    }
    void performoperation()
    {
        cout<<"the value of cos(a) is "<<cos(a)<<endl;
        cout<<"the value of sin(a) is "<<sin(a)<<endl;
        cout<<"the value of tan(a) is "<<tan(a)<<endl;
        cout<<"the value of exp(a) is "<<exp(a)<<endl;
    }
};
class hybridCalculator:public simplecalculator,public scientificcalculator
{

};
int main()
{
    hybridCalculator calc;
    // calc.get_data();
    // calc.perform_operation();
    calc.getdata();
    calc.performoperation();
    return 0;
}
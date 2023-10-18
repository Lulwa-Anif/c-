#include<iostream>
using namespace std;
int main()
{
    int num,den;
    cout<<"enter num and den";
    cin>>num>>den;
    try{
        if(den==0)
        {
            throw den;
        }
    }
    catch(int x)
    {
        cout<<"exception devide by zero not allowed"<<endl;
    }
    int result=num/den;
    cout<<"result: "<<result;
    return 0;
}
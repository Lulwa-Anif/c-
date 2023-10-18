#include<iostream>
using namespace std;
class marks
{
    int mark;
    public:
    marks()  //2
    {
        mark=0;
    }
    marks(int m) //3
    {
        mark=m;
    }
    void yourMarkPlease()    //5   //9   //14
    {
        cout<<" your mark is : "<<mark<<endl ;
    }
    void operator+=(int bonusmarks)     //7
    {
        mark=mark+bonusmarks;
    }
    friend void operator-=(marks &curobj, int redmark)  //11
    {
        curobj.mark-=redmark;      //12
    } 
};
int main()
{
    marks anilmarks(45); //1
    anilmarks.yourMarkPlease();     //4
    anilmarks+=20;                  //6
    anilmarks.yourMarkPlease();     //8
    anilmarks-=20;                  //10
    anilmarks.yourMarkPlease();     //13
}      //15 end
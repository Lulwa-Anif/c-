#include<iostream>
using namespace std;
class Complex
{
    private:
    float x,y;
    public:
    Complex()   //2      //4     //6
    {
        x=0;
        y=0;
    }               //c1 [x=0,y=0]   //c2 [x=0,y=0]  //c3 [x=0,y=0]
    Complex(float real,float imag)
    {
        x=real;
        y=imag;
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.x=x+c.x;
        temp.y=y+c.y;
        return temp;

    }
    void display()
    {
        cout<<x<<"+i"<<y<<endl;
    }
    
};
int main()
{
    Complex c1,c2,c3;  //(1) for c1    //(3) for c2   //(5)for c3
c1=Complex(3,5);
c2=Complex(4,6);
c3=c1+c2;
cout<<"c1=";
c1.display();
cout<<"c2=";
c2.display();
cout<<"c3=";
c3.display();
return 0;
}

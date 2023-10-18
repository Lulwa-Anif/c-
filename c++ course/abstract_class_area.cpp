#include<iostream>
using namespace std;
class shape{
    protected:
    double width,height;
    public:
    double set_data(double x, double y)
    {
        width = x;
        height = y;
    }
    virtual double area()=0;

};
class rectangle:public shape
{
    public:
    double area()
    {
        cout<<"Area of rectangle= "<<width*height<<endl;
    }

};
class triangle:public shape
{
    public:
    double area()
    {
        cout<<"Area of rectangle= "<<(width*height/2);
    }
};

int main()
{
    shape *sptr;
    rectangle rect;
    triangle tri;
    sptr=&rect;
    sptr->set_data(3,4);
    sptr->area();
    // cout<<"area of rectangle= "<<sptr->area()<<endl;
    sptr=&tri;
    sptr->set_data(2,4);
    sptr->area();
    // cout<<"area of triangle= "<<sptr->area()<<endl;


}
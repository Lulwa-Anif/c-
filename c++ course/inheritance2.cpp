#include<iostream>
using namespace std;
class student
{
    protected:
    int rollnum;
    public:
    int set_rollnum(int);
    void get_rollnum(void);
};
int student::set_rollnum(int r)
{
    rollnum=r;
}
void student::get_rollnum()
{
    cout<<"your roll number is "<<rollnum<<endl;
}
class exam:public student{
    protected:
    int maths;
    int physics;
    public:
    void set_marks(float , float);
    void get_marks(void);
};
void exam::set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;
}
void exam::get_marks()
{
    cout<<"the marks of maths is"<<maths<<endl;
    cout<<"the marks of physics is"<<physics<<endl;

}
class result:public exam{
    float percentage;
    public:
    void display()
    {
        get_rollnum();
        get_marks();
        cout<<"the percentage are"<<(maths+physics/2)<<endl;
    }
};
int main()
{
    result obj;
    obj.set_rollnum(3);
    obj.set_marks(98.0,99.0);
    obj.display();
    return 0;
}
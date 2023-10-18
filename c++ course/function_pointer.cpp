#include<iostream>
using namespace std;
class Distance
{
    private:
    int inches,feet;
    public:
    void getdata()
    {
        cout<<"enter the inches";
        cin>>inches;
        cout<<"enter the feet";
        cin>>feet;
    }
    void display()
    {
        cout<<"the inches is "<<inches<<endl<<"the feet is "<<feet;
    }
    
};
int main(){
    Distance dist;
    Distance *ptr=&dist;
    //OR
    // Distance *ptr=new Distance;
    ptr->getdata();
    ptr->display();
    return 0;
}
#include<iostream>
using namespace std;

template<class T>
class harry{
    public:
    T data;
    harry(T a){
        data=a;
    }
    void display(){
        cout<<data;
    }
};

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"I am template func()"<<a<<endl;
}
template<class T>
void func1(T a){
    cout<<"I am template func() "<<a<<endl;
}
int main()
{
    harry<int> h(4);
    // cout<<h.data;
    h.display();
    func(4);
    func1(6);
    return 0;

}
#include<iostream>
using namespace std;
class test
{
    private:
    int count;
    public:
   
    test(int c){
        count=c;
    }
    void operator++()
    {
        count=count+4;
    }
    void display()
    {
        cout<<"count :  "<<count<<endl;
    }
};
int main() {
test t(3);
++t;
t.display();
}    
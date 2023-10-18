#include<iostream>
using namespace std;
template<class T, class U, class V>
class multParameter{
    private:
    T var1;
    U var2;
    V var3;
    public:
    multParameter(T v1, U v2, V v3)
    {
        var1=v1;
        var2=v2;
        var3=v3;

    }
    void display(){
        cout<<var1<<endl;
        cout<<var2<<endl;
        cout<<var3<<endl;

    }
};
int main()
{
    multParameter<int , float, char>obj1(3,6.8,'L');
    obj1.display();
    multParameter<int , bool, char>obj2(3, false ,'S');  //bool -> return 0 or 1
    obj2.display();
    
}
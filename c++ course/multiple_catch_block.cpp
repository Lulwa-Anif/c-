#include<iostream>
using namespace std;
int test(int x)
{
    try{
        if(x>0)
        {
            throw x;
        }
        else 
        throw 'x';
    }
    catch(int x){
        cout<<"catch a integer and that integer is "<<x<<endl;
    }
    catch(char x){
        cout<<"\n catch a character and that character is "<<x<<endl;
    }
    return 0;
}
int main()
{
    cout<<"\n testing multiple catch";
    // test(10);
    test(0);
    test(20);
    return 0;
}
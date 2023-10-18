#include<iostream>
using namespace std;
class base{
};
class derive{
};
int main(){
    try{
        throw derive();
    }
    catch(derive d){
        cout<<"derive object caught\n";
    }
    catch(base b)
    {
        cout<<"base object caught\n";
    }
    
}
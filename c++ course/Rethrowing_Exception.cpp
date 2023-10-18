#include<iostream>
using namespace std;
void function(int x,int y)
{
    cout<<"inside function \n";
    try{
        if(y==0)
        throw y;
        else 
        cout<<"\t division= "<<(x/y);
    }
    catch(int i){
        cout<<"\n cought integer inside function "<<i;
        throw ;
    }
    cout<<"\n end of function";
}
int main(){
    cout<<"inside main function \n";
    try{
        // function(10,2);
        function(7,0);
    }
    catch(int num){
        cout<<"\n cought integer inside main function";
    }
    cout<<"\n end of main function";
    return 0;


}
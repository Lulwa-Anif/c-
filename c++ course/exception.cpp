#include<iostream>
using namespace std;
int main()
{
int x = 111;
cout<<"Before the try block."<<endl;
try
{
cout<<"Inside the try block."<<endl;
// Throwing an exception if the
// value of x is smaller than 100.
if (x <100)
{
// Throwing the value of x as exception as x is now less than 100.
throw x;
cout<<"After throw the throw block."<<endl;
}
}
// Catching the value of x thrown by the throw keyword from the try block.
catch (int x)
{
cout<<"Exception caught in the catch block."<<endl;
}
return 0;
}
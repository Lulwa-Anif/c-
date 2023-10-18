#include<iostream>
#include<string.h>
using namespace std;
class stringCompare
{
    public:
    char str[30];
    

    int operator==(stringCompare s)
    {
        if(strcmp(str,s.str)==0) 
        return true;
        else 
        return false;

    }

};
int main()
{
    char str1[]="world";
    char str2[]="world";
    string s1(str1);
    string s2(str2);
    if(s1==s2 ? true:false)
    {
        cout<<"equal";
    }
    else
    {
        cout<<"not equal";
    }
    return 0;
}
    


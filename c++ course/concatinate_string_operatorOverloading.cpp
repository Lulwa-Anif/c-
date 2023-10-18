#include<iostream>
#include<string.h>
using namespace std;
class CatString
{
  public:
   char str1[30],str2[30];
   char s1,s2;
   
   CatString(char s1[],char s2[]) 
   {
    strcpy(str1,s1);
    strcpy(str2,s2);
    
   }
   void operator +()
{
     cout<<strcat(str1,str2);
    
}
};

int main()
{
    char s1[] = "hello";
    char s2[] = " world";
    CatString a1(s1,s2);
    +a1;
    
    return 0;
}
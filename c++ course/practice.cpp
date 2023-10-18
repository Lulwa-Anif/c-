#include <iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream infile;
    char name[7];
    infile.open("great.txt");
    infile>>name;
    cout<<name;
    infile.close();
    return 0;
}


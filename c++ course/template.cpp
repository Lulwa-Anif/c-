#include<iostream>
using namespace std;
template<typename T,typename U> 
class weight
{
    private :
    T kg;
    T gm;
    public:
    void get_kg(T x)
    {
        kg=x;
    }
    void get_gm(T y)
    {
        gm=y;
    }
    T printdata()
    {
        return kg;
        return gm;
    }

};
int main()
{
    weight<int,float>obj;
}
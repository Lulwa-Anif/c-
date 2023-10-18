#include<iostream>
#include<string>
using namespace std;
class publication {
    public:
    string title;
    float price;
    void get_data()
    {
        cout<<"enter title: ";
        getline(cin, title);
        cout<<"enter price: ";
        cin>>price;
        
    }
    void display()
    {
        cout<<"the title is "<<title<<endl<<" and the price is "<<price<<endl;
    }
};

class book:public publication 
{
    public:
    int page_count;
    void get_pageCount()
    {
        cout<<"enter page count: ";
        cin>>page_count;
        
    }
    void display_pc()
    {
        try{
            if(page_count==0)
            {
                throw page_count;
            }
        }
        catch(int page_count)
        {
            cout<<"exception cought -> page count is zero "<<page_count<<endl;
        }
        cout<<"page count is : " <<page_count<<endl;
    
    }
};

class tape:public publication
{
    public:
    float plTime;
    void get_playTime()
    {
        cout<<"enter play time in minumte : ";
        cin>>plTime;
    }
    void display_pt()
    {
        try{
            if(plTime==0)
            throw plTime;
        }
        catch(float plTime)
        {
            cout<<"exception cought -> play time is zero "<<plTime<<endl;
        }
        cout<<"play time is "<<plTime<<endl;
    }    
}; 
int main()
{
    book b;
    tape t;
    b.get_data();
    b.display();
    b.get_pageCount();
    b.display_pc();
    t.get_playTime();
    t.display_pt();
}

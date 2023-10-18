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
        cout<<"page count is : " <<page_count<<endl;
    }

};

class tape:public book
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
        cout<<"play time is "<<plTime<<endl;
    }
    void handle()
    {
        try{
            if(page_count==0)
            {
                throw page_count;
            }
            if(plTime==0)
            throw plTime;
        }
        catch(int page_count)
        {
            cout<<"exception cought -> page count is zero "<<page_count<<endl;
        }
        catch(float plTime)
        {
            cout<<"exception cought -> play time is zero "<<plTime<<endl;
        }

    }
    
}; 
int main()
{
    tape t;
    t.get_data();
    t.display();
    t.get_pageCount();
    t.display_pc();
    t.get_playTime();
    t.display_pt();
    t.handle();
    
    return 0;
} 

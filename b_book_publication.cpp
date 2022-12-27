#include <iostream>
using namespace std;
class publication 
{
    protected:                                                  // access specifier  =  protected
    string title;
    float prices;
    public:
    publication()   //constructor
    {
        title = "";
        prices = 0;
    }
    void setdata()
    {
        cout<<"enter title of book "<<endl;
        cin>>title;
        cout<<"enter prices of your book"<<endl;
        cin>>prices;
    }
    void getdata();
};
void publication :: getdata()
{
    cout<<"TITLE OF THE BOOK IS "<<title<<endl;
    cout<<"PRICE OF THE BOOK IS "<<prices<<endl;
}
class book :public publication
{
    public :
    int page;
    int length ,bridth;
    int weight;
    void set_data()
    {
        cout<<"enter how much pages book have "<<endl;
        cin>>page;
        cout<<"enter length and bridth of book "<<endl;
        cin>>length>>bridth;
        cout<<"enter weight of book"<<endl;
        cin>>weight;
    }
    void get_data();
};
class tape :public publication
{
    protected :
    float playtime;
    int cdprice;
    public :
    tape()
    {
        playtime=0.0;
        cdprice = 0;
    }
    void set_info()
    {
        cout<<"enter play time of cassette :"<<endl;
        cin>>playtime;
        cout<<"enter cd price according to time"<<endl;
        cin>>cdprice;
    }
    void put_data()
    {
        cout<<"PLAY TIME OF CASSETTE IS "<<playtime<<endl;
        cout<<"CD PRICE ACCORDING TO TIME IS "<<cdprice<<endl;
    }
};
int main ()
{
    int a,i;
        book b1;
        tape t1;
    int counter=1;
    cout<<"************SHARDA PUBLICATION LIMITED**********"<<endl;
    cout<<"enter how much book that you want to publish"<<endl;
    cin>>a;
    for(i=0;i<a;i++)
    {
        cout<<"publication of book no "<<counter<<endl;
        b1.setdata();
        b1.set_data();
        t1.set_info();

    
    
        
        b1.getdata();
        b1.get_data();
       
        t1.put_data();
        
    
    counter++;
    }
    return 0;
}

void book :: get_data()
{
    cout<<title<<" has page count is "<<page<<endl;
    cout<<"size of the book is "<<length<<"by"<<bridth<<endl;
    cout<<"weight of book is "<<weight;
}

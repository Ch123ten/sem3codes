#include<iostream>
#include<string.h>
using namespace std;
class student  //class declared
{
    friend class information;

    int roll_no;
    char *div;
    char name[20];
    static int count;   //static function 
    string blood_g,clas;
    string dob,add;
    long int *telno,*mono;
    
    public:
    student()      //defoult constructor
    {
        //name = "";
        roll_no = 0;
        div = new char;
        blood_g = " ";
        clas = "";
        dob = "";

    }
    student (student &p1)   //coppy constructir
    {
        this->name[20] = p1.name[20];    //this pointer
        this->clas = p1.clas;
        this->dob = p1.dob;
        this->roll_no = p1.roll_no;
        //this->blood_g = p1.blood_g;
        this->div=p1.div;
    }
    
    ~student()     //distructor is use
    {
        delete div;
        //delete blood_g;
    }
    void setdata()   //member function
    {
        cout<<"enter name of the student "<<endl;
        cin.getline(name,20);
        cout<<"enter class of the student "<<endl;
        cin>>clas;
        cout<<"enter divisin of the student"<<endl;
        cin>>div;
        cout<<"enter rolll no of the student"<<endl;
        cin>>roll_no;
        cout<<"enter birth date of student"<<endl;
        cin>>dob;
        cout<<"enter blood group of student"<<endl;
        cin>>blood_g;
    }
    inline static void setcount() //inlinre funcyion
    {
        count++;
    }
    inline static void getcount() //static member function;
    {
        cout<<"this is information of student no "<<count<<endl;
    }
    void display()
    {
        cout<<" name of the student : "<<name[20]<<endl;
        cout<<" class of the student : "<<clas<<endl;
        cout<<"enter divisin of the student : "<<div<<endl;
        cout<<"enter rolll no of the student : "<<roll_no<<endl;
        cout<<"enter birth date of student : "<<dob<<endl;
        cout<<"enter blood group of student : "<<blood_g<<endl;
    }
};
int student ::count =0; //increment static int
class information :public student
{
    public:
    information()
    {
        add=" ";
        telno = new long int;
        mono = new long int;
    }
    information(information &p2)
    {
        this->add = p2.add;
        this->telno = p2.telno;
        this->mono = p2.mono;
    }
    ~information()
    {
        delete telno;
        delete mono;
    }
    void getsd()
    {
        cout<<"enter telephone no of student "<<endl;
        cin>>*telno;
        cout<<"enter driving lican no "<<endl;
        cin>>*mono;
        cout<<"enter address of student"<<endl;
        cin>>add;//getline (cin,add);
    }
      void dispsd()
    {
        cout<<"telephone no of student : "<<*telno<<endl;
        cout<<"driving lican no : "<<*mono<<endl;
        cout<<"address of student : "<<add<<endl;
    }
};
int main()
{
    int n=0;
    char m;
    do
    {
        information i1;
        i1.setdata();
        student::setcount();  //call static member function
        i1.getsd();
        i1.display();
        i1.dispsd();
        i1.getcount();
        
        n++;
        cout<<"you want to cotinue ragisteration 'y' for yes and 'n' for no select 1"<<endl;
        cin>>m;
    } while (m=='y');
    cout<<"total ragisterb student count is : "<<n<<endl;
    return 0;
}
    

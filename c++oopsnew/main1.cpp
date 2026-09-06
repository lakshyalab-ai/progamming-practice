#include<iostream>
using namespace std;
//class student
//{
//private:
//    string name;
//    int age;
//    string grade;
//public:
//    void setname(string n)
//    {
//        name=n;
//    }
//    void setage(int a)
//    {
//        age=a;
//    }
//    void setgrade(string g)
//    {
//        grade=g;
//    }
//    void getname()
//    {
//        cout<<name<<endl;
//    }
//    void getgrade()
//    {
//        cout<<grade<<endl;
//    }
//};
//int main()
//{
//    student s1;
//    s1.setname("ls");
//    s1.setgrade("a+");
//    s1.getname();
//    s1.getgrade();
//}


//class customer
//{
//    string name;
//    int account_balance;
//    int balance;
//public:
//    customer()
//    {
//        cout<<"constructor is called"<<endl;
//    }
//};
//int main()
//{
//    customer a1;
//}



//class customer
//{
//    string name;
//    int age;
//    int balance;
//public:
//    customer()
//    {
//        name="rohan virdi";
//        age=40;
//        balance=5000 ;
//    }
//    void display()
//    {
//        cout<<name<<" "<<age<<" "<<balance<<" "<<endl;
//    }
//};
//int main()
//{
//    customer a1;
//    a1.display();
//}


//class customer
//{
//    string name;
//    int age;
 //   int balance;
//public:
//    customer()
//    {
//        name = "rv";
//        age=49;
//        balance=9000;
//    }
//    customer(string n, int a, int b) //para const
//    {
//        name=n;
//        age=a;
//        balance=b;
//    }
//    void display()
//    {
//        cout<<name<<" "<<age<<" "<<balance<<" "<<endl;
//    }
//};
//int main()
//    {
//        customer a1;
//        customer a2("raj",20,5000);
//        a1.display();
//        a2.display();
//    }



//class employee
//{
//    string name;
//    int balance;
//    int age;
//public:
 //   void setname(string n)
 //   {
 //       name=n;
 //   }
 //   void setbalance(int b)
 //   {
 //       balance=b;
 //   }
 //   void setage(int a)
 //   {
//        age=a;
//    }
//    void getname()
//    {
//        cout<<name<<endl;
//    }
//    void getbalance()
//    {
//        cout<<balance<<endl;
//    }
//    void getage()
//    {
//        cout<<age<<endl;
//    }
//};
//int main()
//{
//    employee e1;
//    e1.setname("mr lakshya sharmaji");
//    e1.setbalance(50000000);
//    e1.setage(19);
//    e1.getname();
//    e1.getbalance();
//    e1.getage();
//}


// class sum
// {
//    int number_1;
//    int number_2;
// public:
//    void  setnumber_1(int n1)
//    {
//        number_1=n1;
//    }
//    void setnumber_2(int n2)
//    {
//        number_2=n2;
//    }
//    void display()
//    {
//        cout<<"sum:"<<number_1 + number_2<<endl;
//    }
// };


// class flight
// {
//     int flight_no;
//     string destination;
//     float distance;
//     float fuel;
//     void calfuel()
//     {
//         if(distance<=100){
//             fuel=500;
//         }
//         else if(distance>1000 && distance<2000){
//             fuel=1100;
//         }
//         else{
//             fuel=2200;
//         }
//     }
//     public:
//     void feed_info()
//     {
//         cout<<"enter flight number:";
//         cin>>flight_no;
//         cout<<"enter destination:";
//         cin>>destination;
//         cout<<"enter distance:";
//         cin>>distance;
//         calfuel();
//     }

//     void show_fuel(){
//         cout<<"flight_no :"<<flight_no<<"\n";
//         cout<<"destination :"<<destination<<"\n";
//         cout<<"distance :"<<distance<<"\n";
//         cout<<"Fuel :"<<fuel;
//     }
// };

// int main()
// {

//         flight ft;

//         ft.feed_info();
//         ft.show_fuel();

//         return 0;
// }


// class worker{
//     private:
//     string wname;
//     float hrwrk;
//     float wgrate;
//     float totwage;
//     void calcwg(){
//         totwage=hrwrk*wgrate;
//     }
//     public:
//     void in_data()
//     {
//         cout<<"enter worker name:";
//         cin>>wname;
//         cout<<"enter hours work:";
//         cin>>hrwrk;
//         cout<<"enter wage rate:";
//         cin>>wgrate;

//         calcwg();
//     }
//     void out_data()
//     {
//         cout<<"worker name:"<<wname<<"\n";
//         cout<<"hours:"<<hrwrk<<"\n";
//         cout<<"total wage:"<<totwage<<"\n";
//     }
// };
// int main()
// {
//     worker w;
//     w.in_data();
//     w.out_data();

//     return 0;
// }


// class teacher{
//     private:
//     string name;
//     string subject;
//     float basic;
//     float da;
//     float hra;
//     float salary;
//     void calculate()
//     {
//         salary=basic+da+hra;
//     }
//     public:
//     void readdata()
//     {
//         cout<<"enter name:";
//         cin>>name;
//         cout<<"enter subject:";
//         cin>>subject;
//         cout<<"enter basic:";
//         cin>>basic;
//         cout<<"enter da:";
//         cin>>da;
//         cout<<"enter hra:";
//         cin>>hra;

        
//         calculate();
//     }
//     void displaydata()
//     {
//         cout<<"name:"<<name<<"\n";
//         cout<<"subject:"<<subject<<"\n";
//         cout<<"basic:"<<basic<<"\n";
//         cout<<"da:"<<da<<"\n";
//         cout<<"hra:"<<hra<<"\n";
//         cout<<"salary:"<<salary<<"\n";
//     }
// };
// int main()
// {
//     teacher  t;
//     t.readdata();
//     t.displaydata();

//     return 0;
// }

// class student{
//     int admno;
//     string sname;
//     float eng;
//     float maths;
//     float science;
//     float total;
//     void ctotal()
//     {
//         total=maths+science+eng;
//     }
//     public:
//     void takedata(){
//         cout<<"enter admno:";
//         cin>>admno;
//         cout<<"enter student name:";
//         cin>>sname;
//         cout<<"enter marks eng:";
//         cin>>eng;
//         cout<<"enter marks maths:";
//         cin>>maths;
//         cout<<"enter marks science:";
//         cin>>science;

//         ctotal();
//     }
//     void showdata()
//     {
//         cout<<"admno:"<<admno<<"\n";
//         cout<<"sname:"<<sname<<"\n";
//         cout<<"eng:"<<eng<<"\n";
//         cout<<"maths:"<<maths<<"\n";
//         cout<<"science:"<<science<<"\n";
//         cout<<"total:"<<total;
//     }
// };
// int main()
// {
//     student st;
//     st.takedata();
//     st.showdata();
//     return 0;
// }


// class student{
//     public:
//     string name;
//     int  rollno;

//     void input_data()
//     {
//         cout<<"enter name:";
//         cin>>name;
//         cout<<"enter rollno:";
//         cin>>rollno;
//     }
//     void display()
//     {
//         cout<<"name:"<<name<<"\n";
//         cout<<"rollno:"<<rollno<<"\n";
//     }
// };
// int main()
// {
//     student s;
//     s.input_data();
//     s.display();
//     return 0;
// }






// class student{
//     public:
//     int rollno;
//     string name;
// };
// int main()
// {
//     student s1;

//     s1.name="lakshya";
//     s1.rollno=78;

//     cout<<"student name:"<<s1.name<<"\n";
//     cout<<"roll no:"<<s1.rollno<<"\n";

//     return 0;
// }



// class rectangle{
//     public:
//     double length;
//     double width;

//     void cal_area()
//     {
//         cout<<"area:"<<length*width<<endl;
//     }
//     void cal_perimeter()
//     {
//        cout<<"perimeter:"<<2*(length+width);
//     }
// };
// int main()
// {
//     rectangle r;

//     cout<<"enter length of rectangle:";
//     cin>>r.length;

//     cout<<"enter width of rectangle:";
//     cin>>r.width;

//     r.cal_area();
//     r.cal_perimeter();
// }


// class employee{
//     int empno;
//     string ename;
//     float salary;

//     public:
//     void getdata()
//     {
//         cout<<"enter employee number:";
//         cin>>empno;
//         cout<<"enter employee name:";
//         cin>>ename;
//         cout<<"enter salary:";
//         cin>>salary;
//     }
//     void displaydata()
//     {
//         cout<<"name:"<<ename<<"\n";
//         cout<<"number:"<<empno<<"\n";
//         cout<<"salary:"<<salary<<"\n";
//     }
// };
// int main(){
//     employee e;
//     e.getdata();
//     e.displaydata();
//     return 0;
// }



// class product{
//     int product_id;
//     string product;
//     int price;
//     int qty;
//     int total;
//     void total_amt(){
//         total=price*qty;
//     }
//     public:
//     void get_data()
//     {
//         cout<<"enter product id:";
//         cin>>product_id;
//         cout<<"enter product:";
//         cin>>product;
//         cout<<"enter price:";
//         cin>>price;
//         cout<<"enter quantity:";
//         cin>>qty;
//     }
//     void display_data()
//     {
//         total_amt();

//         cout<<"product id:"<<product_id<<endl;
//         cout<<"product:"<<product<<endl;
//         cout<<"price:"<<price<<endl;
//         cout<<"quantity:"<<qty<<endl;
//         cout<<"totalamt:"<<total<<endl;
//     }
// };
// int main()
// {
//     product p;
//     p.get_data();
//     p.display_data();
//     return 0;
// }


// class electricity{
//     int consumer_no;
//     string name;
//     int units;
//     int bill;

//     void calculate_bill()
//     {
//         if (units<=100)
//         {
//             bill=2*units;
//         }
//         else if(units>100 && units<=200)
//         {
//             bill=3*units;
//         }
//         else{
//             bill=5*units;
//         }
//     }
//     public:
//     void get_data()
//     {
        

//         cout<<"enter consumer no:";
//         cin>>consumer_no;
//         cout<<"enter name:";
//         cin>>name;
//         cout<<"enter units:";
//         cin>>units;
//         78calculate_bill();
//     }
//     void display_data()
//     {
        
//         cout<<"consumer no:"<<consumer_no<<endl;
//         cout<<"name:"<<name<<endl;
//         cout<<"units:"<<units<<endl;
//         cout<<"bill:"<<bill<<endl;

//     }
// };
// int main()
// {
//     electricity e;
//     e.get_data();
//     e.display_data();
//     return 0;                         // units cal// bill generation// code//
// }

// class student{
//     string nm;
//     public:
//         int roll;

//     void input()
//     {
//         cout<<"enter name:";
//         cin>>nm;
//         cout<<"enter roll:";
//         cin>>roll;
//     }
//     void show(){
//         cout<<"roll:"<<roll<<endl;
//         cout<<"name:"<<nm<<endl;
//     }
// };
// int main()
// {
//     student s[5];
//     for(int i=0;i<5;i++)
//     {
//         cout<<"enter details of student"<<i+1<<endl;
//         s[i].input();
//     }
//     cout<<"details of student";
//     int R;
//     cout<<"\nEnter rn to search :";
//     cin>>R;


//     for(int i=0;i<5;i++)
//     {
//         if(s[i].roll==R)
//         s[i].show();
//     }
// }


// class student{
//     string nm;
//     string marks;
//     public:
//     int rollno;
//     void input()
//     {
//         cout<<"enter name:";
//         cin>>nm;
//         cout<<"enter marks:";
//         cin>>marks;
//         cout<<"enter rollno:";
//         cin>>rollno;
//     }
//     void output()
//     {
//         cout<<"name"<<nm<<endl;
//         cout<<"marks"<<marks<<endl;
//         cout<<"rollno"<<rollno<<endl;
//     }
// };
// int main()
// {
//     student s[10];
//     for(int i=0;i<10;i++)
//     {
//         cout<<"enter details of student"<<i+1<<endl;
//         s[i].input();
//     }
//     int r;
//     cout<<"enter roll to search:";
//     cin>>r;
//     for(int i=0;i<10;i++)
//     {
//         if(s[i].rollno==r)
//         {
//         cout<<"found"<<endl;
//         s[i].output();
//         }
//     }                                //check//
// }

class book{
    int bookid;
    int price;
    public:
    string title;
    void input()
    {
        cout<<"enter book id:";
        cin>>bookid;
        cout<<"enter price:";
        cin>>price;
        cout<<"enter title:";
        cin>>title;
    }
    void output()
    {
        cout<<bookid;
        cout<<price;
        cout<<title;
    }
};
int main()
{
    book d[5];
    for(int i=0;i<5;i++)
    {
        cout<<"enter details:"<<i+1<<endl;
        d[i].input();  
    }
    string t;
    cout<<"enter title to search:";
    cin>>t;
    for(int i=0;i<5;i++)
    {
        if(d[i].title==t)
        {
            cout<<"found"<<endl;
            d[i].output();
        }
    }
}
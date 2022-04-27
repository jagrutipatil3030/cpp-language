//multipele inheritance
#include<iostream.h>
#include<conio.h>
class student           //base class
{
   private:
	   int roll;
	   char name[90];
   public:
	 void getinfo();
	 void show();
};
class marks                    //base class
{
    protected:
	   int m1,m2,m3;
    public:
	 void getdata();
	 void display();

};
class result:public student,public marks   //derived class
{
     private:
	   int total;
     public:
	   void gettotal();
	   void showtotal();

};
void student::getinfo()
{
   cout<<"\n_____________ fill out the below information ________________ ";
   cout<<"\n\n roll number of the student is : ";
   cin>>roll;
   cout<<"\n name of the student is : ";
   cin>>name;
}
void marks::getdata()
{
     cout<<"\n_______________ marks of student ___________________      ";
     cout<<"\n marks  of suject 1 :";
     cin>>m1;
     cout<<"\n marks  of suject 2 :";
     cin>>m2;
     cout<<"\n marks  of suject 3 :";
     cin>>m3;
 }
void student::show()
{
  cout<<"\n______________ information of student _______________________\n";
  cout<<"\n roll number of the student is :- "<<roll;
  cout<<"\n name of the student is :-"<<name;
}
void marks::display()
{
     cout<<"\n\n______________ marks list ________________";
      cout<<"\n\n marks of subject 1 is : "<<m1;
      cout<<"\n marks of subject 2 is : "<<m2;
      cout<<"\n marks of subject 3 is : "<<m3;
}
void result ::gettotal()
{
    getinfo();               //function withing function
    getdata();
    total=m1+m2+m3;
}
void result::showtotal()
{
     show();       //function witing function declaration
     display();
     cout<<"\n                 . total of marks is "<<total;
}
void main()
{

   clrscr();
	    result r;
	    r.gettotal();
	    r.showtotal();

   getch();
}

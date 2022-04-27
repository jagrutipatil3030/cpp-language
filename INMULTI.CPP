#include<iostream.h>
#include<conio.h>
class student
{
   private:
	    int roll ;
	    char name[69],c[90];
   public:
	   void get();
	   void show();
};
class marks
{

    protected:
		int m1,m2,m3,m4,m5;
   public:
	      void data();
	      void display();
};
class result:public student,public marks
{

  private:
	int total,sport,m;
   public :
	       void getdata();
	       void showdata();
};
void student::get()
{

      cout<<"\n .............. Fill Out  The Information .................";
      cout<<"\n Enter Roll Number Of Student : ";
      cin>>roll;
      cout<<" Enter Name Of The Student : ";
      cin>>name;
      cout<<" Enter Your Course Nname : ";
      cin>>c;
}
void marks:: data()
{
      cout<<"\n............. List Of Student Marks ..................";
      cout<<"\n Enter Marks Of First Subject :";
      cin>>m1;
      cout<<" Enter Marks Of Second Subject :";
      cin>>m2;
      cout<<" Enter Marks Of Third Subject :";
      cin>>m3;
      cout<<" Enter Marks Of Forth Subject :";
      cin>>m4;
      cout<<" Enter Marks Of Forth Subject :";
      cin>>m5;
 }
void student::show()
{

  cout<<"\n__________________Information Of Student__________________";
  cout<<"\n Roll Number Of Student Is :- "<<roll;
  cout<<"\n Name Of The Studentis :- "<<name;
  cout<<"\n Course Name :- "<<c;
}
void marks::display()
{
     cout<<"\n\n_______________ Marks List Of Student_______________";
     cout<<"\n Marks Of First Subject Is : "<<m1;
     cout<<"\n Marks Of Second Subject Is : "<<m2;
     cout<<"\n Marks Of Third Subject Is : "<<m3;
     cout<<"\n Marks Of Forth Subject Is : "<<m4;
     cout<<"\n Marks Of FiTh Subject Is : "<<m5;
 }
 void result::getdata()
 {
      get();
      data();


    total=m1+m2+m3+m4+m5;
    cout<<"\n  Enter Sport Marks";
    cin>>sport;
    m=total+sport;
}
void result::showdata()
{
   show();
   display();

    cout<<"\n Total Of Subjects Marks :-> "<<total<<endl;
    cout<<"\n Subject + Sport Marks :-> "<<m;
 }
 void main()
 {
    clrscr();
result r;
     r.getdata();
     r.showdata();

    getch();
 }

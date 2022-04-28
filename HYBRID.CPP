//hybrid inheritance
#include<iostream.h>
#include<conio.h>
class stude
{
       private:
	       int roll;
	       char name[90];
       public:
	      void getdata();
	      void showdata();
};
void stude::getdata()
{
   cout<<"\n            Inforamtion Of Student Are Given Below               ";

   cout<<"\n Roll Number Of The Student :- ";
   cin>>roll;
   cout<<" Name Of The Student :- ";
   cin>>name;
}
void stude ::showdata()
{
      cout<<"\n            Information Of Student                    \n";

      cout<<"\n Roll Number Of The Student is :         "<<roll;
      cout<<"\n Name Of The student Is :       "<<name;
}
class marks:public stude
{
    protected :
		int m,m1;
    public:
	     void get();
	     void show();
};
void marks::get()
{
     cout<<"\n\n         Fill Out The Student Marks           ";

     cout<<"\n Enter Marks Of Subject 1 : ";
     cin>>m;

     cout<<" Enter Marks Of subejct  2 : ";
     cin>>m1;
}
void marks::show()
{
      cout<<"\n\n              Marks List Of the Stduent      \n ";
      cout<<"\n Marks Of First subejct Is :- "<<m;
      cout<<"\n Marks Of Second Suject Is :- "<<m1;
}
class info
{
       private :
		  int age;
		  char add[60];
       public:
		void get_a();
		void show_a();
};
void info::get_a()
{
     cout<<"\n\n Additional Information OF Student ";

    cout<<"\n Enter Age Of The Student : ";
    cin>>age;

    cout<<" Enter Address of The Student : ";
    cin>>add;
}
void info::show_a()

{
	cout<<"\n\n              Additional Information OF Student         \n";
	cout<<"\n Age Of The Student :- "<<age;
	cout<<"\n Address of The Student :- "<<add;
}
class result :public marks ,public info
{
      private :
	       int total;
      public :
	      void getp();
	      void showp();

};
void result::getp()
{
     stude::getdata();
     marks::get();
     info::get_a();
     total=m+m1;
}
void result::showp()
{
     stude::showdata();
     marks::show();
     info::show_a();
     cout<<"\n                       Total Of Two Subject : "<<total<<endl;
}
void main()
{
    clrscr();
	   result r;
	   r.getp();
	   r.showp();
    getch();
}









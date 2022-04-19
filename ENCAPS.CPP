#include<iostream.h>
#include<conio.h>
class marks
{
   private:
	    int m1,m2,total,rollno;
	    char name[50];
	    float avg;
   public:
	    void get();
	    void put();

};
 void marks::get()
{
   cout<<"Enter The Roll Number"<<endl;
   cin>>rollno;
   cout<<"Enter Sudent Name"<<endl;
   cin>>name;
   cout<<"Eneter The subject1"<<endl;
   cin>>m1;
   cout<<"Enter the Subject2"<<endl;
   cin>>m2;
}
void marks::put()
{
  total=0;
  total=m1+m2;
  avg=total/2;
  cout<<"\n";
  cout<<"\n marks list";
  cout<<endl<<  "Roll number :- \t";
  cout<< rollno;
  cout<<endl<<  "name :- \t";
  cout<<name;
  cout<<endl<<  "marks subject1 :- \t";
  cout<<m1;
  cout<<endl<<  "marks subject2 :- \t";
  cout<<m2;
  cout<<endl<<  "total marks :- \t";
  cout<<total;
  cout<<endl<< "average :- \t";
  cout<<avg;
}
void main()

{
 clrscr();
     marks q;
     q.get();
     q.put();
 getch();
}



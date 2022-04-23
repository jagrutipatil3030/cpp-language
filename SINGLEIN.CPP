//single inheritance
#include<iostream.h>
#include<conio.h>

class Single
{
  private :

			int rollno;
			char name[40];

  public:

		   void Getdata();
		   void Display();

};
class marks:public Single       //single inheritance
{

	private:

			 int m1,m2,m3;
	public:

			void put();
			void show();
};
void Single::Getdata()                    //calling statement
{
	  cout<<" Roll Nmuber Of The Student :\t  ";
	  cin>>rollno;

	  cout<<"Name Of The Student :\t  ";
	  cin>>name;
}
void marks::put()
{                                   //calling function witing function
	  Getdata();

	 cout<<"\n marks of subject first \t";
	 cin>>m1;

	 cout<<"\n marks of subject secnod \t";
	 cin>>m2;

	 cout<<"\n marks of the  subject third \t";
	 cin>>m3;
}
void Single::Display()
{
	cout<<"\n\n______________ informaationof student _______________";
	cout<< "\n Roll Number Of The Student Is: \t\n"<<rollno<<endl;
   cout<<endl<<"\n Name Of The Student Is: \t\n"<<name<<endl;
}
void marks::show()
{
	Display();
	cout<<"\n\n________________ marks of the student_________   \n\n ";
  cout<<"\n\nmarks of the first subject : \t"<<m1<<endl;
  cout<<"\nmarks of the secnod subject : \t"<<m2<<endl;
  cout<<"\nmarks of third subject is : \t"<<m3<<endl;
}
void main()
{
 clrscr();
	marks m;
	m.put();
	m.show();
 getch();
}

//unary operator overloading with the help of firend function
#include<iostream.h>
#include<conio.h>
class ufriend
{
   private :
	     int a,b,c;
   public :
	    void getdata();
	    void showdata();
	    friend void operator-(ufriend &x);

};
void ufriend::getdata()
{
    cout<<"\n\n      Used of Operator Ovrloading With The Help Of Friend Function     \n ";

    cout<<"\n Enter Value Of a : ";
    cin>>a;

    cout<<"\n Enter Value Of b : ";
    cin>>b;

    cout<<"\n Enter Value Of c : ";
    cin>>c;
}
void ufriend::showdata()
{
   cout<<"\n\n_________________________________________________\n";
   cout<<"\n Value Of X Is :- "<<a;
   cout<<"\n Value Of Y Is :- "<<b;
   cout<<"\n Value Of Z Is :- "<<c;

}
void operator -(ufriend &x)
{
 x.a=-x.a;
 x.b=-x.b;
 x.c=-x.c;
 }
void main()
{
  clrscr();
	  ufriend u;
	  u.getdata();
	  u.showdata();
	  -u;
	  u.showdata();
  getch();
}


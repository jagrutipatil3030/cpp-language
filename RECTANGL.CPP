//friend function
//rectriangle formula
#include<iostream.h>
#include<conio.h>
class demo;
class one
{
      private :
	       int len;

      public:

	   void getdata(int l);
	   friend int rec(one,demo);
};
class demo
{
	private :
		int bre;

	public :

	      void get (int l);
	      friend int rec(one,demo);
};
void one :: getdata( int l)
{

  len=l;

}
void demo :: get(int l)
{

   bre=l;

}
int rec (one q,demo p)
{

   return q.len* p.bre;

}
void main ()
{
    clrscr();
	 int mul,len,bre;

	 one v;
	 cout<<"\n      Used Of Freind Function \n\n";
	 cout<<"\n Area Of Rectrinagle \n";

	 cout<<"\n Enter value for length :- ";
	 cin>>len;
	 v.getdata(len);

	 demo w;
	 cout<<" \n Enter value for  breadth  :- ";
	 cin>>bre;
	 w.get(bre);
	 mul=rec(v,w);
	 cout<<"\n Area of rectangle :- "<<mul;
    getch();
 }
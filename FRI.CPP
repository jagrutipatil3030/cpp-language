//demonstrated uesd of friend function
//additon of number
#include<iostream.h>
#include<conio.h>

class two;
class one
{
    private :
		int a;

     public :
	       void get(int x);
	      friend int add(one,two);

};
class two
{
     private :
	       int b;

     public :
	      void get1(int x);
	      friend int add(one,two);  //freind function declaration


};
void one ::get(int x)                 //definition of class one
{
   a=x;
}
void two::get1(int x)                    //definiton of class two
{
  b=x;
}
int add(one p,two q)
{                                                        //temporary variable are get
  return p.a+q.b;                             //equation
}
void main ()
{
 clrscr() ;
       int sum,a,b;
	    one obj;
	    cout<<"\n    Demonstrsate Used Of Friend Function   \n\n ";
		   cout<<"\n enter value of a : ";
		   cin>>a;
		   obj.get(a);
		   two om;
		   cout<<"\n enter value of b : ";
		   cin>>b;
		   om.get1(b);
	    sum=add(obj,om);
		   cout<<"\n         Additon Is :     "<<sum;

  getch();
}
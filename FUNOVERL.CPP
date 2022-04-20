//function overloadinh
#include<iostream.h>           //headerfile
#include<conio.h>
class over
{

   public:
	  void swap(int &,int&);        // function  declaration
	  void swap(char&,char&);       //same name but different parameter
	  void swap(float&,float&);
};
void over::swap(int &a,int &b)            //defination
{
    int t;                                  //declartion
	t=a;
	a=b;
	b=t;
}
void over::swap(char &p,char &q)
{
     int r;                                      //declration
	 r=p;
	 p=q;
	 q=r;
}
void over::swap(float &m,float &n)
{
    int s;
	 s=m;
	 m=n;
	 n=s;
}
void main()
{
  clrscr();
	  over o1;                               //object create
		 int a,b;
		 char p,q;
		 float m,n;
	cout<<"\n\n...... 1 Enter two integer......";
       cout<<"\n\n value of integer a:->\t";          //swapping of integer value
       cin>>a;
       cout<<"\n  value of integer b:->\t";
       cin>>b;

       cout<<"\n\n        Before swapping a and b:-\t"<<a<<"\t"<<b;
      o1.swap(a,b);
       cout<<"\n        After Swapping a and b:-\t"<<a<<"\t"<<b;

       cout<<"\n\n ......2 Enter two charector......";           //swapping of charector
       cout<<"\n\n value of charector p:->\t";
       cin>>p;
       cout<<"\n value of charector q:->\t";
       cin>>q;

       cout<<"\n        Before swapping p and q:- \t"<<p<<"\t"<<q;
     o1.swap(p,q);
       cout<<"\n        After swapping ofp and q:-\t"<<p<<"\t"<<q;

       cout<<"\n\n .......3 Enter the float number.......";      //swaping of float  value

       cout<<"\n\n  value ofinteger m:->";
       cin>>m;
       cout<<"\n value of integer n:->";
       cin>>n;

       cout<<"\n\n        Before swappping m and n:\t"<<m<<"\t"<<n;
    o1.swap(m,n);
       cout<<"\n        After swapping ofp and q:\t"<<m<<"\t"<<n;
  getch();
}




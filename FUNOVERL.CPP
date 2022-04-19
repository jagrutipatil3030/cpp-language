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
	cout<<"\n\nEnter two integer ";
       cout<<"\n\n Enter value a \t";          //swapping of integer value
       cin>>a;
       cout<<"\n\n Enter value b \t";
       cin>>b;

       cout<<"\n\n Before swapping a and b :- \t"<<a<<"\t"<<b;
      o1.swap(a,b);
       cout<<"\n\n After Swapping a and b:-\t"<<a<<"\t"<<b;

       cout<<"\n\nEnter two charector ";           //swapping of charector
       cout<<"\n\n value of charector p  \t";
       cin>>p;
       cout<<"\n\n value of charector q \t";
       cin>>q;

       cout<<"\n\nBefore swapping p and q:- \t"<<p<<"\t"<<q;
     o1.swap(p,q);
       cout<<"\n\n After swapping ofp and q:-\t"<<p<<"\t"<<q;

       cout<<"\n\n Enter the float number";      //swaping of float  value

       cout<<"\n\n Eenter value of m:";
       cin>>m;
       cout<<"\n\n Enterbthe value of n:";
       cin>>n;

       cout<<"/n/n Before swappping m and n:-\t"<<m<<"\t"<<n;
    o1.swap(m,n);
       cout<<"\n\n After swapping ofp and q:-\t"<<m<<"\t"<<n;
  getch();
}




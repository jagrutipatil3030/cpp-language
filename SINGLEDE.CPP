// multipe constructor but single destrctor
#include<iostream.h>
#include<conio.h>
class demo
{
    private:

	     int a,b,c,r,t,s;
    public:
	     demo();              //default constructor
	     demo(int p,int q);   //parameter constructor
	     demo(demo &temp);     //copy constructor
	    void show();
	     ~demo();
};
demo::demo()
{
     cout<<endl<<"\n\n..........................Defualt Constructor Called.......................... \n\n\n";

}
demo::demo(int p,int q)          //two parameter
{

       a=p;
       b=q;
       c=a+b;

}
void demo::show()
{

      cout<<"               . Parameter Constructor Called\n\n        "<<"\n Enter Value of a\n"<<a<<"\n Enter Value of b \n"<<b;
	cout<<"\n\n  * Additon  of Two Charector\n\n"<<c;
}
demo::demo(demo &temp)
{
      a=temp.a;

      b=temp.b;
	 cout<<" \n\n\n                      . Copy Constructor Called             \n\n ";
	 cout<<"\n Value of a is Copied in p\n\n"<<a;
	 cout<<"\n Value of b is Copied in q\n\n"<<b;
}
demo::~demo()
{

    cout<<"\n\n........Destructor  Called........ \n\n\n";

}
void main()
{
 clrscr();
	 demo d1;           //default constructor
	 demo d2(10,20);      //parameter constructor
	 d2.show();
	 demo d3(d2);
  getch();
}








// constructor
#include<iostream.h>
#include<conio.h>
class num
{
       private:
		int a,b,c;

       public:
	      num();        //constructor
	      void show();
	      void put();

};
void num::show()
{
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
}
num::num()
{
    cout<<"\n\n .......constructor called........\n\n";
    cout<<"\nEnter the value for a\n";
    cin>>a;
    cout<<"\nEnter the value for b\n";
    cin>>b;
    cout<<"\nEnter the value for c\n";
    cin>>c;
}
void num::put()
{
 cout<<"\n..........display value............\n";
}
void main()
{
  clrscr();
      num x;

      x.put();
      x.show();
  getch();
}
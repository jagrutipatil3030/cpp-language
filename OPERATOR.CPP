//unary opearator
#include<iostream.h>
#include<conio.h>
class first
{
  private:
	   int a,b,c,m;

  public:
	  void data();
	  void show();
	  void operator-();

};
void first::data()
{
   cout<<"\n Used of Unary Opearator overloaging \n";

    cout<<"\n Enter Value of A : ";
    cin>>a;

    cout<<"\n Enter Value of b : ";
    cin>>b;

    cout<<"\n Enter Value of c : ";
    cin>>c;

}
void first:: operator-()
{
    a=-a;
    b=-b;
    c=-c;
    m=b-a;
    cout<<"\n\n      substraction of A and B variable :    "<<m;
}
void first ::show()
{
   cout<<"\n\n ___________________ used of unary operator__________________";
   cout<<"\n Valur Of A is : "<<a;
   cout<<"\n Value Of B Is : "<<b;
   cout<<"\n Value Of C Is : "<<c;
}

void main()
{
  clrscr();
	   first f;
	   f.data();
	   -f;
	   f.show();
  getch();
}
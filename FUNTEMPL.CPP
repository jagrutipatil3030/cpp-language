//function template
// additon oF two run time value
#include<iostream.h>
#include<conio.h>
template<class T>
 add(T a,T b)
 {

   T c,d,f;
   c= a+b;
       cout<<"\n _____________________ OUTPUT __________________________";
       cout<<"\n \n.Additon Of Two Number : "<<c;
   d= a-b;
	cout<<"\n\n.Substraction of Two Number : "<<d;
   f= a*b;
   cout<<"\n\n.Multipicaton of Two Number : "<<f;

}
void main()
{
   clrscr();

       cout<<"\n\n.............. Used Of Template Function................\n";

   int a,b;

	cout<<"\n Enter Value Of A :- ";
	cin>>a;

	cout<<"\n Enter Value Of B :- ";
	cin>>b;

	add(a,b);         // get user through value

  getch();
}

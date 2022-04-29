#include<iostream.h>
#include<conio.h>
class unary
{
    private:
	     int a,b,c;
    public:
	    void get();
	    void put();
	    void operator-();   //uesd of operator keyword with its sing in the delcation inside the class
};
void unary::get()
{
       cout<<"\n Used Of Unary Operator Over loading \n";

       cout<<"\n Enter The Value Of A : ";
       cin>>a;

       cout<<" Enter  The Value Of B : " ;
       cin>>b;

       cout<<" Enter  The Value Of c : " ;
       cin>>c;
}
void unary::operator-()
{
    a=-a;
    b=-b;
    c=-c;
}
void unary::put()
{
    cout<<"\n\n __________________ output _______________________";
    cout<<"\n\n Value Of A Is : "<<a;
    cout<<"\n Value Of B Is : "<<b;
    cout<<"\n Valie Of c Is : "<<c;
}
void main()
{
   clrscr();
	 unary n;
	 n.get();
	 -n;
	 n.put();
    getch();
}
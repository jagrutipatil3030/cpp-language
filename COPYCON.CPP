#include<iostream.h>
#include<conio.h>
class copy
{

    private:
	    int a,b;
    public :
	    copy(int x, int y);
	    copy(copy &reference);
	  void display();



};
copy::copy(int x,int y)
{
    a=x;
    b=y;
}
copy::copy(copy &reference)
{
 a=reference.a;
 b=reference.b;
 cout<<"\n\n...............USED OF COPY CONSTRUCTOR..................\n\n\n";
 cout<<"value of x is copy in a"<<endl;
 cout<<"value od y is copy in b"<<endl;


}
void copy::display()
{
cout<<"\n\n......... Copy in........\n"<<endl;
cout<<" a : ";
cout<<a<<endl;
cout<<" b : ";
cout<<b;

}

void main()
{
 clrscr();
       copy obj1 (20,30);
       copy  obj2 =obj1;
       obj2.display();
 getch();

}



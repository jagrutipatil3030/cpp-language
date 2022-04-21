//prime number
#include<iostream.h>
#include<conio.h>

class prime
{
     private:
	     int i,p;

     public:
	     int check(int x);
	     void show();


};
prime::check(int x)
{
    p=0;
	for(i=2;i<x;i++)
       {
	     if(x % i ==0)

	  {

	      p=1;
	     break;
	  }
      }
     return p;
}
void prime::show()
{
	 cout<<endl<<"            Find out Number is Prime or Not"<<endl;

}
void main()
{
      int x,p;
  clrscr();
	  prime obj;
	  obj.show();
	       cout<<endl<<endl<<"Enter a Number: "<<endl;
	       cin>>x;

	 p=obj.check(x);
      if(p==0)
    {

	cout<<"Number is prime Number : "<<x;

    }
      else

    {

       cout<<"Number is Not Prime Nnumber : "<<x;
    }
 getch();
}

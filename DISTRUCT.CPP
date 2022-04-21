//used of distructor
#include<iostream.h>
#include<conio.h>
class dis
{
       private:
	       int a,b;

       public:
	      dis(int a,int b);          //paramterize constructor
	      void show ();
	      ~dis();                   //distructor

};
void dis::show()
{

     cout<<"\n\n"<<"               Parameterize Constructor called               \n\n"<<"\n value of a is : "<<a<<"\n"<<"value of b is : " <<b ;

}
dis::dis(int x ,int y)
{
  a=x;
  b=y;
}
 dis::~dis()
{

     cout<<"\n\n               distructor callled     \n\n";

}
int main()
{
  clrscr();
	 dis z(10,20);
	 z.show();

   getch();
   return 0;
}


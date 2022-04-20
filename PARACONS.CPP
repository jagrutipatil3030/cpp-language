#include<iostream.h>
#include<conio.h>
class par
{
      private:
	       int a,b,c;

      public:
	     par(int o,int p, int q);
	     void show();

};
par::par(int o,int p, int q)
{
       a=o;
       b=p;
       c=q;

}
void par::show()
{
   cout<<"\n\n"<<"........parameterize constructor..........\n\n"<<"\n value of a: "<<a<<"\n value of b: "<<b<<"\n value of c: "<<c;
}
int main()
{
   clrscr();
	 par h(20,30,45);
	 h.show();
    getch();
       return 0;

}


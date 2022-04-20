//constructor overloading squre
#include<iostream.h>
#include<conio.h>
class loading
{
      private :
		  int a,e,f;

      public:
	     loading();              //default constructor
	     loading(int x);        //parameterize constructor(one argument)
	     loading(int m,int d);  //parameterize constructor(one argument)
	     loading(loading &ref);  //copy constructor

};
loading::loading()
{
      cout<<"\n............Default Constructor............\n";
      cout<<"  No Parameter Uesd in Default Constructor \n";
}
loading::loading(int x)
{
      a=x;
    cout<<"\n\n . Constructor With One Parameter :  "<<a;
    cout<<"\n Squre of Given Number :  "<<a*a<<endl;
}
loading::loading(int v,int f)
{
    cout<<endl<<endl<<" . Constructor With Two Parameter "<<endl;
    cout<<"\n Squre of first number :- "<<v*v;
    cout<<"\n squre of second nuumber :- "<<f*f<<endl;
    cout<<"\n additon of numbers :- "<<v+f<<endl<<endl;

}
loading::loading(loading &ref)
{
    cout<<"\n...... copy constructor...... ";
    a=ref.a;
    cout<<"\n copied  value :- "<<a;

}

void main()
{
   clrscr();
       loading d1;
       loading d2(3);
       loading d3(2,3);
       loading d4(d2);
   getch();
 }

//template function
#include<iostream.h>
#include<conio.h>

template <class T>  //declation of template

void swap(T a,T b)
{
	    cout<<"\n               . Before Wapping Of Two Value          \n";
	    cout<<"\n value of A is : "<<a;
	     cout<<"\n value of B is : "<<b<<endl;
    T t;
    t=a;
    a=b;
    b=t;

	   cout<<"\n\n                 . After Swapping Of Two Value             \n";
	   cout<<"\n  A :- \t"<<a;
	   cout<<"\n  B :- \t"<<b<<endl;
}
void main()
{
 clrscr();
	cout<<"__________________ 1.integer type value _______________ \n ";
	swap(5,6);    //defult value

	cout<<"__________________2. float type value _________________ \n ";
	swap(5.5,6.6);  //defulat value
 getch();
}


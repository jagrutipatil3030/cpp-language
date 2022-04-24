//multilevel inheritance
#include <iostream.h>
#include<conio.h>
class family1
{
     protected:
		 char my[30],father[50],mom[50],bro[90],sis[70];
     public:
	    void get_a();
	    void show_b();


};
class jagu:public family1
{

     protected:
	      char first[50],second[50],third[50],forth[50],fith[50];
     public:
	     void get_c();
	     void show_d();

};
class result:public jagu
{
    private :
	    char relation[100];
    public:
	   void display();

};

void family1::get_a()
{

      cout<<"my name : \t  ";
      cin>>my;
      cout<<"father name : \t  ";
      cin>>father;
      cout<<"mother name : \t  ";
      cin>>mom;
      cout<<"brother name : \t  ";
      cin>>bro;
      cout<<"sister name : \t  ";
      cin>>sis;
}
void jagu::get_c()
{
    cout<<"\nmy education :  \t";
    cin>>first;

    cout<<"father education :  \t";
    cin>>second;

    cout<<"mother education :  \t";
    cin>>third;

    cout<<"brother education : \t";
    cin>>forth;

    cout<<"sister education :  \t";
    cin>>fith;


}
void result::display()

{

      cout<<"\n_________________ RELATIONSHIP WITH MY FAMILY MEMBERS _________________________\n";
      cout<<". you know about me\n";
      cout<<"\n. singita is my mother name";
      cout<<"\n  my mom helpls me any time";
      cout<<"\n\n. sanjay is my father name";
      cout<<"\n  my father is my supporter";
      cout<<"\n\n. swapnil is my borther name";
      cout<<"\n  my borther is my life";
      cout<<"\n\n. vaishu is my sister name";
      cout<<"\n  my sister understand all my fllings\n";
}
void family1::show_b()
{
     cout<<"\n________________________________ NAMES OF ME AND MY FAMLIY _________________ \n";
     cout<<"my name is : \t "<<my<<endl;
     cout<<"father name is : \t "<<father<<endl;
     cout<<"mother name is : \t "<<mom<<endl;
     cout<<"brother name is : \t "<<bro<<endl;
     cout<<"sisiter name is : \t "<<sis<<endl;
}
void jagu::show_d()
 {
     cout<<"\n........................... EDUCATION OF ME AND MY FAMLIY .................. \n";
     cout<<"my Education is : \t "<<first<<endl;
     cout<<"father Education is  : \t "<<second<<endl;
     cout<<"mother Education is  : \t "<<third<<endl;
     cout<<"brother Education is : \t "<<forth<<endl;
     cout<<"sisiter Education is : \t "<<fith<<endl;
}

void main()
{
 clrscr();
      result r;
      r.get_a();
      r.get_c();
      r.display();
      r.show_b();
      r.show_d();


  getch();
}
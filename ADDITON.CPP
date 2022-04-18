//used of class and object
#include<iostream.h>                  //headerfile
#include<conio.h>
 class add                          //class is key word
{                                   //braces
    private:                        //access specifier private declaration
	     int  x,y,c;            //data members

    public :                        //public declaration
	    void getdata();         //member function
	    void  add1();           //member function

};
void add::getdata()                 //definition outside the class body
{
  cout<<"additon"<<endl;
  cout<<"first number:-> "<<endl;
  cin>>x;
  cout<<"second number:-> "<<endl;
  cin>>y;
}
void add ::add1()
{
    c=x+y;
    cout<<"additon of given number is"<<endl<<c;

}
void main()                           //main function
{
clrscr();
       add b;                         //create class
       b.getdata();
       b.add1();
getch();
}

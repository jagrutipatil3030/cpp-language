//default constructor
//used of default constructor
#include<iostream.h>
#include<conio.h>
class fault
{
    private:
	  int num1,num2;

    public:
	  fault()             //default constructor
	  {
	     cout<<"\n\n..........Default Constructor called........\n\n";
		num1=10;
		num2=30;
	  }
	void display()
	 {
	      cout<<"\n Number One Value :\n";
		  cout<< num1<<endl;  //definition inside the class
	      cout<<"\n Number Two Value :\n";
		  cout<< num2;
	 }
};
int main()
{
   clrscr();
      fault d1;
      d1.display();
   getch();
     return 0;

}

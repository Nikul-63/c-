#include<iostream>
using namespace std;
 class A{
 	public:
 		void showfname(string fname)
 		{
 			cout<<"Your First name is:-"<<fname;
		 }
 };
 
 class B:public A{
 	public:
 		void showmname(string mname)
 		{
 			cout<<"Your Middle name is:-"<<mname;
		 }
 };
 
 class C:public B{
 	public:
 	void showlname(string lname)
 	{
 		cout<<"Your Last name is:-"<<lname;
	 }
 };
 
  int main()
  {
  	C c;
    c.showfname("GOVIND\n");
    c.showlname("DABHI\n");
    c.showmname("KESHABHAI\n");
    return 0;
  }

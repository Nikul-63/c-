/*
q:2]Assign and print the roll number,phone num,address of two students having names
'sam' and 'john'.Creating two objects of the class student.
*/


#include<iostream>
using namespace std;

 class Student
 {
   public:
   	
	int roll_no;
	string name;
	string phone_nu;
	string address;
  };
  
  int main()
  {
  	Student s,j;
  	
  	cout<<"***************************************Sam's info***************************************"<<endl<<endl;
  	
  	s.name="Sam";
  	cout<<"Your Name is:-"<<s.name<<endl;
  	
  	s.roll_no=2;
  	cout<<"Your Roll no is:-"<<s.roll_no<<endl;
  	
  	s.phone_nu="9879061081";
  	cout<<"Your Phone Number is:-"<<s.phone_nu<<endl;
  	
  	s.address="9/99,nilam_park,bhaktinagar,bapunagar";
  	cout<<"Your address is:-"<<s.address<<endl<<endl<<endl;
  	
  	cout<<"***************************************John's info***************************************"<<endl<<endl;
	j.roll_no=3;
  	cout<<"Your Roll No is:-"<<j.roll_no<<endl;
  	
  	j.name="John";
  	cout<<"Your Name is:-"<<j.name<<endl;
  	
  	j.phone_nu="9773169882";
  	cout<<"Your Phone no is:-"<<j.phone_nu<<endl;
  	
  	j.address="9/235,bhaktinagar,bapunagar,ahmedabad";
  	cout<<"Your Address is:-"<<j.address<<endl;
  	
  	return 0;
  }
	



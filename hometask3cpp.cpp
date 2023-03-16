/*q:1]Create a class named 'Student' with a string variable 'name' and an integer 
    variable 'roll_no'.
   -Assign the value of roll-no as '2' and that of name as 'John' by creating 
    an object of the class Student.
    */


	
#include<iostream>
using namespace std;

 class Student
 {
  public:
  string name;
  int roll_no;
  		
 };

	int main()
	{
		Student s;
		s.name="john";
		s.roll_no=2;
		cout<<"Your Name is:-"<<s.name<<endl;
		cout<<"Your Roll No is:-"<<s.roll_no;
		return 0;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

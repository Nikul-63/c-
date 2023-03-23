/*
* What is destructor?
-> Destructor is an instance member function which is invoked automatically whenever an object is going to be 
   destroyed.
*/
#include<iostream>
using namespace std;
//make global count variable
 int count = 0;
 
//making class
 class num{
 	public:
 		
//make a constructor
   num()
   {
   	count++;
   	cout<<"This is the time when CONSTRUCTOR is called for object number"<<count<<endl;
   }
   
// make a destructor
   ~num()
   {
   	cout<<"This is the time when DESCTRUCTOR is called for objecct number"<<count<<endl;
   	count--;
   }
 		
 };

 int main()
 {
 	cout<<"We are inside our main function"<<endl;
 	cout<<"creating first object n1"<<endl;
 	num n1;
 	{
 		cout<<"Entering this block"<<endl;
 		cout<<"Creating two more objects"<<endl;
 		num n2, n3;
 		cout<<"Exiting this block"<<endl;
	 }
	 cout<<"Back to main"<<endl;
 	return 0;
 }

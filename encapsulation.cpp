/*
  What is Encapsulation?
->Encapsulation means to make sure that "Sensitive" data is hidden from users.
  If you want others to read or modify the value of a private member,
   you can provide public 'get' and 'set' methods.
   
   How to access Private Members?
-> To Access a pricate member use public 'get' and 'set' methods. 
*/

#include<iostream>
using namespace std;

 class employe{
 	private:
 		int salary;
 		
 	public:
 		void setSalary(int s){
 		salary = s;
 		}
 		
 		int getSalary(){
 			return salary;
		 }
 };
  int main(){
  	employe myobj;
  	myobj.setSalary(50000);
  	cout<<"Your Salary is:-"<<myobj.getSalary();
  	return 0;
  }

#include<iostream>
using namespace std;

 class first{
 	private:
 		
 		int salary;
 		
 	public:
 		
 	   void getsalary(int a)
 	   {
 	   	salary=a;
		}
		
	   void setsalary()
	   {
	   	cout<<"Your salary is:-"<<salary;
	   }
 };
 
  int main()
  {
  	first f;
  	f.getsalary(30000);
  	f.setsalary();
  	return 0;
  }

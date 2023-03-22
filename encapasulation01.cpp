/*#include <iostream>
using namespace std;

// declaring class
class Circle {
	// access modifier
private:
	// Data Member
	float area;
	float radius;

public:
	void getRadius()
	{
		cout << "Enter radius\n";
		cin >> radius;
	}
	void findArea()
	{
		area = 3.14 * radius * radius;
		cout << "Area of circle=" << area;
	}
};
int main()
{
	// creating instance(object) of class
	Circle cir;
	cir.getRadius(); // calling function
	cir.findArea(); // calling function
}
*/

#include<iostream>
using namespace std;

 class encapsulation{
 	private:
 		int x;
 		
 	public:
 		void set(int a){
 			x = a;
		 }
		 int get(){
		 	return x;
		 }
 };
 
 int main(){
 	encapsulation obj;
 	obj.set(5);
 	cout<<"Your Number is:-"<<obj.get();
 	return 0;
 }

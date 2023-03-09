#include<iostream>
using namespace std;

 class superdemo
 {
 	private:
 		void show()
 		{
 			cout<<"I am from superclass Demo as a public";
		 }
		 
		 public:
		 	int x;
 };
 
 class subdemo:public superdemo
 {
 	public:
 		void showsub()
 		{
 			cout<<"I am from subclass demo as a public";
		 }
 };
 
  int main()
  {
  	subdemo sub;
  	sub.showsub();
	sub.x=20;
	
	cout<<"x-variable value is:-"<<sub.x;
	return 0;  
	    }

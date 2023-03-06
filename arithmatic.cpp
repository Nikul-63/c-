#include<iostream>
using namespace std;

 int main()
 {
 	int no1,no2;
 	string op;
 	
 	cout<<"\n Enter your first no:-";
 	cin>>no1;
 	
 	cout<<"\n Enter your second no:-";
 	cin>>no2;
 	
 	cout<<"\n***********************************************************************************************";
 	cout<<"\n Select your operator between this(+,-,*,/)";
 	cout<<"\n***********************************************************************************************";
 	
 	cout<<"\n Enter your operator:-";
 	cin>>op;
 	
 	 if(op=="+")
 	 {
 	 	cout<<"Your Ans is:-"<<no1+no2;
	  }
 	 else if(op=="-")
 	 {
 	 	cout<<"Your Ans is:-"<<no1-no2;
	  }
 	 else if(op=="*")
 	 {
 	 	cout<<"Your Ans is:-"<<no1*no2;
	  }
 	 else if(op=="/")
 	 {
 	 	cout<<"Your Ans is:-"<<no1/no2;
	  }
	  else
	  {
	  	cout<<"PLEASE select right operator";
	  }
 	return 0;
 }

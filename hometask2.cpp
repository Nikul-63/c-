#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

 class Login
 {
 	string email,pass;
 	
 	clrscr();
 	public:
 	
 	  void logdata()
 	  {
 	  	
 	  	cout<<"\n****************************************************************LOGIN______PAGE****************************************************************";
 	  	cout<<"\nEnter your E-mail ID:-"<<endl;
 	  	cin>>email;
 	  	
 	  	cout<<"\nEnter your Password:-";
 	  	cin>>pass;
      }
 	  	
 	  	void check()
 	  	{
		  	  	 if(email=="dabhinikul625@gmail.com" && pass=="Govind@2004")
 	  	 {
 	  	 	cout<<"Successfully Login...!";
			}
			
		 else
		 cout<<"Your ID or PASSWORD didn't match...!";
	    }

 };
 
 
 class new_account:public Login
 {
 	double mobileno;
    string name;
    string email,pass;
    
    clrscr();
    public:
    
    void regdata()
    {
    	cout<<"\n\n\n****************************************************************REGISTER___PAGE****************************************************************";
		cout<<"\nEnter your Name:-";
    	cin>>name;
    	
    	cout<<"\nEnter your mobile no:-";
    	cin>>mobileno;
    	
    	cout<<"\nEnter your e-mail:-";
    	cin>>email;
    	
    	cout<<"\nEnter your password:-";
    	cin>>pass;
	}

 };
 
 
 class operators:public new_account
 {
 	int no1,no2;
 	string op;
 	public:
 		
 		
 	
 	void calc()
 	{
 	
 	cout<<"\n***********************************************************************************************";
 	cout<<"\n*********************SIMPLE CALCULATOR*********************";
 	cout<<"\n***********************************************************************************************";
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
    }

 };
        	
 
 int main()
 {
 	 operators n;
 	int ch;
 int count=0;
        do
        {
                cout<<"\n1.***Login-page***";
                cout<<"\n2.***New_Account***";
                cout<<"\n3.***Exit***\n";
                cout<<"\nEnter the choice :: ";
                cin>>ch;
                switch (ch)
                {
        case 1:
                        n.logdata();
                        n.check();
                        count++;
                        break;

        case 2:
                        n.regdata();
                        n.logdata();
                        break;
                 }
                
        } while (ch!=3);

 	
   
   	return 0;
 }

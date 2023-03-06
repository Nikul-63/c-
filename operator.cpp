//Making login page like enter password and email address then if you give
//correct user email id and password then you successfully login ...

#include<iostream>
using namespace std;

int main()
{
	string mail,pass;
	
	cout<<"\nEnter your E-mail address:-";
	cin>>mail;
	
	cout<<"\nEnter your password:-";
	cin>>pass;
	
	if(mail=="dabhinikul625@gmail.com"&&pass=="Govind@2004")
	cout<<"\n\n**************************************************SUCCESSFULLY LOGIN**************************************************";
	else
	cout<<"\nYOUR PASSWORD OR ID IS INCORRECT";
	
	return 0;
}

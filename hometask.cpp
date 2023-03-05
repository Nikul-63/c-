#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class student
{
        int no;
        char name[25];
        char add [30];
        char Gender[10];
        string mail;
        clrscr();
        public:

        void getdata()
        {
        	    cout<<"\n *******************************************Enter-Student-information*******************************************";
                cout<<"\n enter the student Enrollement no:-  ";
                cin>>no;
                cout<<"\n enter the student name:-  ";
                cin>>name;
                cout<<"\n enter ther student address:-  ";
                cin>>add;
                cout<<"\n enter the student Gender:-  ";
                cin>>Gender;
                cout<<"\n enter the email address:- ";
                cin>>mail;
        }
        void putdata()
        {
        	    cout<<"\n*******************************************STUDENT-INFORMATION*******************************************";
                cout<<"\n the student enrollement no: "<<no;
                cout<<"\n the student name: "<<name;
                cout<<"\n the student address:"<<add;
                cout<<"\n the student Gender: "<<Gender;
                cout<<"\n the student E-mail id:"<<mail;
        }
};
class college: public student
{
	    char cname[20];
	    char sname[23];
	    char sem[15];
        int sub1;
        int sub2;
        int sub3;
        int sub4;
        int sub5; 
        int sub6;
        int total;
        int per;
        public:
        	

    void input()
        {
                getdata();
                cout<<"\n\n*******************************************Enter-COLLEGE-information*******************************************";
                cout<<"\n enter college name:-";
                cin>>cname;
                cout<<"\n enter stream name:-";
                cin>>sname;
                cout<<"\n enter your semester:-";
                cin>>sem;
                cout<<"\n enter the subject-1 Marks: ";
                cin>>sub1;
                cout<<"\n enter the subject-2 Marks: ";
                cin>>sub2;
                cout<<"\n enter the subject-3 Marks: ";
                cin>>sub3;
                cout<<"\n enter the subject-4 Marks: ";
                cin>>sub4;
                cout<<"\n enter the subject-5 Marks: ";
                cin>>sub5;
                cout<<"\n enter the subject-6 Marks: ";
                cin>>sub6;
        }
        void output()
        {
                putdata();
                cout<<"\n\n*******************************************college-information*******************************************";
                cout<<"\n Your college name is:-"<<cname;
                cout<<"\n Your stream name is:-"<<sname;
                cout<<"\n Your semester is:-"<<sem;
                cout<<"\n Your Subject-1 marks:- "<<sub1;
                cout<<"\n Your Subject-2 marks:-"<<sub2;
                cout<<"\n Your Subject-3 marks:-"<<sub3;
                cout<<"\n Your Subject-4 marks:-"<<sub4;
                cout<<"\n Your Subject-5 marks:-"<<sub5;
                cout<<"\n Your Subject-6 marks:-"<<sub6;
        }
        void calculate ()
        {
		        cout<<"\n\n*******************************************P_E_R_C_E_N_T_A_G_E*******************************************";	    
                per= (sub1+sub2+sub3+sub4+sub5+sub6)/6;
                cout<<"\n total percentage :: "<<per<<"\n";
        }
        void sum()
        {
            cout<<"\n\n*******************************************S_U_M*******************************************";
        	total=(sub1+sub2+sub3+sub4+sub5+sub6);
        	cout<<"\n Total Marks::"<<total<<"\n";
		}
};

int main()
{
        college m1;
        m1.input();
        m1.output();
        m1.sum();
        m1.calculate();
        }


#include<iostream>
using namespace std;
class college{
	public:
		void getcollege(string cname)
		{
			cout<<"Your college name is:-"<<cname;
		}
};

class Department{
	public:
		void getstream(string sname)
		{
			cout<<"Your stream name is:-"<<sname;
		}
};

class student:public college,public Department{
	public:
		void getstudent(string studname)
		{
			cout<<"Student name is:-"<<studname;
		}
};
  int main()
  {
  	student s;
  	s.getcollege("Gujarat University\n");
  	s.getstream("Cloud & application\n");
  	s.getstudent("dabhi nikul keshabhai\n");
  	 return 0;
  }

#include<iostream>
using namespace std;
class university
{
	public:
		char staff[20];
		char studentname[20];
		int rollno;
		int phoneno;
		void data()
		{
			cout<<"enter the staff name:"<<endl;
			cin>>staff;
			
		}
};
class arts: public university
{
	public:
		void data()
		{
			cout<<"enter the arts clg student name:"<<endl;
			cin>>studentname;
			cout<<"entrer the roll number:"<<endl;
			cin>>rollno;
			cout<<"enter the phone no:"<<endl;
			cin>>phoneno;
		}
};
class engineering: public university
{
	public:
		void data()
		{
			cout<<"enter the enginering student name:"<<endl;
			cin>>studentname;
			cout<<"enter the roll number:"<<endl;
			cin>>rollno;
			cout<<"enter the phone no:"<<endl;
			cin>>phoneno;
		}
};
class medical: public university
{
	public:
		void data()
		{
			cout<<"enter the medical student name:"<<endl;
			cin>>studentname;
			cout<<"enter the roll number:"<<endl;
			cin>>rollno;
			cout<<"enter the phone number:"<<endl;
			cin>>phoneno;
		}
};
int main()
{
	university a;
	a.data();
	arts b;
	b.data();
	engineering c;
	c.data();
	medical d;
	d.data();
	return 0;
}

#include<iostream>
using namespace std;
class p
{
	int x=5;
	public :
		void getdata1()
		{
			cout<<"x value is"<<x<<endl;
		}
};
class C:public p
{
	int y=6;
	public :
		void getdata()
	{
		cout<<"y value is"<<y<<endl;
	}
};
int main()
{
	C c;
	c.getdata1();
	c.getdata();
}

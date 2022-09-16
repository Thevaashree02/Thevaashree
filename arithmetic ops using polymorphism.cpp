#include<iostream>
using namespace std;
class arithmetic
{
	int add,sub,mul,div,modu,x,y;
	public:
		void display()
		{
			cout<<"integers are x&y"<<endl;
		}
};
class add:public arithmetic
{
	int x,y;
	public:
	void display()
	{
		cout<<"addition value is"<<x+y<<endl;
	}
};
class sub:public arithmetic
{
	int x,y;
	public:
	void display()
	{
		cout<<"subtraction value is"<<x-y<<endl;
	}
};
class mul:public arithmetic
{
	int x,y;
	public:
	void disp()
	{
		cout<<"multiplication value is"<<x*y<<endl;
	}
};
class div:public arithmetic
{
	int x,y;
	public:
	void display()
	{
		cout<<"division value is"<<x/y<<endl;
	}
};
class modu:public arithmetic
{
	int x,y;
	public:
	void display()
	{
		cout<<"modulus value is"<<x%y<<endl;
	}
};
int main()
{
	modu m;
	m.display();
    div d;
    d.display();
    mul u;
    u.display();
    sub s;
    s.display();
    add a;
    a.display();
	
	
}



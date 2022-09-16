#include<iostream>
using namespace std;
class arithematic{
	public:
		int x=24,y=12;
		virtual disp(){
			cout<<"enter two numbers:"<<x<<y<<endl;
		}
};
class add:public arithematic{
	public:
		virtual disp(){
			cout<<"addition of two numbers:"<<x+y<<endl;
		}
};
class subtract:public arithematic{
	public:
		virtual disp(){
			cout<<"subtraction of two numbers:"<<x-y<<endl;
		}
};
class mul:public arithematic{
	public:
		virtual disp(){
			cout<<"multiplication of two numbers:"<<x*y<<endl;
		}
};
class div:public arithematic{
	public:
		virtual disp(){
			cout<<"divison of two numbers:"<<x/y<<endl;
		}
};
class mod:public arithematic{
	public:
		virtual disp(){
			cout<<"modulues of two numbers:"<<x%y<<endl;
		}
};
int main(){
	arithematic *a;
	add a1;
	subtract s1;
	mul m1;
	div d1;
	mod m2;
	a=&a1;
	a ->disp();
	a=&s1;
    a->disp();
	a=&m1;
	a->disp();
	a=&d1;
	a->disp();
	a=&m2;
	a->disp();
	return 0;
	
}

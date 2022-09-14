#include<iostream>
using namespace std;
int main()
{
	int a,b,c,choice;
	cout<<"provide your choice";
	cin>>choice;
	switch (choice)
	{
		case1:
			c=a+b;
			cout<<"addition c="<<c;
			break;
		case2:
			c=a-b;
			cout<<"subtraction c="<<c;
			break;
		default:
			cout<<"provide choice between 1-2";
			break;
	}
}

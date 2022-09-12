#include<iostream>
using namespace std;
int main()
{
	int i,j,a[7],t,sum,diff;
	cout<<"enter the numbers:"<<endl;
//	int n=[14,16,87,36,25,89,34];
	for(i=1;i<=7;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=7;i++)
	{
		for(j=i+1;j<=7;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			for(i=1;i<=7;i++)
			{
				sum=a[0]+a[6];
				diff=a[0]-a[6];
				cout<<"max number="<<a[0]<<endl;
				cout<<"min number="<<a[6]<<endl;
				cout<<"sum="<<sum<<endl;
				cout<<"diff="<<diff<<endl;
			}
		}
	}
}

#include<iostream>
using namespace std;
void main()
{
	for(int i=1;i<10;i=i+2)
	{for(int j=1;j<15-i;j++)
	cout<<" ";
	for(j=1;j<=i;j++)
		cout<<"*"<<" ";
	cout<<endl;
	}
	for(i=2;i<=8;i=i+2)
	{for(int j=1;j<i+6;j++)
	cout<<" ";
	for(j=1;j<=9-i;j++)
		cout<<"*"<<" ";
	cout<<endl;
	}
}
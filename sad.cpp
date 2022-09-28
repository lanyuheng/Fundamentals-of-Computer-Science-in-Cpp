#include<iostream>
#include<iomanip>
using namespace std;

void main()
{
	int i,j;
	char a[60],b[10][60],c[5][60],d[5][60];
		for(i=0;i<60;i++)
		a[i]=' ';
	for(j=0;j<20;j++)
	for(i=0;i<60;i++)
	{
		if(i==(6+j))
			a[i]='_';
		else if(i==(36+j))
			a[i]='_';
	}
	for(i=0;i<60;i++)
		cout<<a[i];
	cout<<endl;
	for(i=0;i<10;i++)
	{
		for(j=0;j<60;j++)
		{
			if((j==10)||(j==21)||(j==40)||(j==51))
				b[i][j]='|';
			else
				b[i][j]=' ';
		}
	}
	for(i=0;i<10;i++)
	{
		{for(j=0;j<60;j++)
			cout<<b[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<60;j++)
		{
			c[i][j]=' ';
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<60;j++)
		{
		cout<<c[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<60;j++)
		{
			if(j==(30-i))
			d[i][j]='/';
		else if(j==(31+i))
		    d[i][j]='\\';
		else
			d[i][j]=' ';
		}
	}
		for(i=0;i<10;i++)
		{
			for(j=0;j<60;j++)
		{
			cout<<d[i][j];
		}
		   cout<<endl;
		}
}
#include<iostream>
#include<iomanip>
using namespace std;

void main()
{
	int i,j;
	char a[10][60],b[5][60],c[5][60];
		for(i=0;i<10;i++)
		{
			for(j=0;j<60;j++)
			{
		if(j==(15-i))
			a[i][j]='/';
		else if(j==(16+i))
		    a[i][j]='\\';
		else if(j==(45-i))
			a[i][j]='/';
		else if(j==(46+i))
			a[i][j]='\\';
		else
			a[i][j]=' ';
			}
		}
	for(i=0;i<10;i++)
	{
		for(j=0;j<60;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<60;j++)
		{
			b[i][j]=' ';
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<60;j++)
		{
			cout<<b[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<60;j++)
		{
			if(j==(26+i))
			c[i][j]='\\';
		else if(j==(35-i))
		    c[i][j]='/';
		else
			c[i][j]=' ';
		}
	}
		for(i=0;i<10;i++)
	{
		for(j=0;j<60;j++)
		{
			cout<<c[i][j];
		}
		   cout<<endl;
	}
}

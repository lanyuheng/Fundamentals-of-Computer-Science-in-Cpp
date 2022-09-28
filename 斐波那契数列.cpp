#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int i,a,b,c;
	a=0,b=1;
	for(i=1;i<=40;i++)
	{
		if(!(i%8)==0)
			cout<<setw(10)<<a;
		else
			cout<<setw(10)<<a<<endl;
			c=a+b;
	a=b;
	b=c;
	}

}
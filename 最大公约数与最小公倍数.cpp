#include<iostream.h>

int f1(int a,int b)
{
	int c,d,k=1;
	if(a<b)
	{
		c=a;
		a=b;
		b=c;
	}
	while((!k)==0)
	{d=a%b;
	a=b;
	b=d;
	k=a%b;
	}
	return b;
}

int f2(int a,int b)
{
	int s;
	s=a*b/f1(a,b);
	return s;
}

void main()
{
	int a,b;
	cout<<"������������:"<<endl;
	cin>>a>>b;
	cout<<"�������������Լ��Ϊ:"<<f1(a,b)<<endl;
	cout<<"������������С������Ϊ:"<<f2(a,b)<<endl;
}


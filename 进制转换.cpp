#include<iostream>
using namespace std;


void changez(double a,int r);
void changex(double a,int r,int n);
void change(double a,int r,int n)
{
	cout<<"ת������Ϊ:";
	changez(a,r);
	cout<<".";
	changex(a,r,n);
	cout<<endl;
}
void changez(double a,int r)
{
	int b,c,d;
	b=(int)a;
	if(r<=10)
	{
	while((!d)==0)
	{c=b%r;
	cout<<c;
	d=b/r;
	}
	}
	else
	{
	while((!d)==0)
	{
		c=b%r;
		switch(c)
		{
		case 10:cout<<"A";
		case 11:cout<<"B";
		case 12:cout<<"C";
		case 13:cout<<"D";
		case 14:cout<<"E";
		case 15:cout<<"F";
		default:break;
		}
		cout<<c;
		d=b/r;
		b=d;
	}
	}
}

void changex(double a,int r,int n)
{
	double b,c,d;
	int m,i;
	m=(int)a;
	for(i=0;i<n;i++)
	{b=a-m;
	c=(a-m)*r;
	d=(int)c;
	cout<<d;
	}
}

void main()
{
	double p;
	int q,n;
	cout<<"��������Ҫת������:";
	cin>>p;
	cout<<endl;
	cout<<"��������Ҫת���ɵĽ���:";
	cin>>q;
	cout<<endl;
	cout<<"��������Ҫ������С��λ����:";
	cin>>n;
	cout<<endl;
	change(p,q,n);
}

#include<iostream>

using namespace std;

#define pi 3.14159

class point
{
	int x,y;
public:
	point(int a,int b){x=a;y=b;}
	int rx(){return x;}
	int ry(){return y;}
	virtual void area()
	{cout<<"���Ϊ:"<<0;}
};

class zft:public point
{
	int l;
public:
	zft(int a,int b,int c):point(a,b){l=c;}
	virtual void area()
	{
		double sum;
		sum=l*l*l;
		cout<<"���������Ϊ:"<<sum;
	}
};

class yzt:public point
{
	int r;
	int h;
public:
	yzt(int a,int b,int c,int d):point(a,b){r=c;h=d;}
	virtual void area()
	{
		double sum;
		sum=pi*r*r*h;
		cout<<"Բ��������Ϊ:"<<sum;
	}
};

class qt:public point
{
	int r;
public:
	qt(int a,int b,int c):point(a,b){r=c;}
	virtual void area()
	{
		double sum;
		sum=4*pi*r*r*r/3;
		cout<<"��������Ϊ:"<<sum;
	}
};
void fun(point *p)
{p->area();
cout<<endl;}
void main()
{
	int m,n;
	cout<<"��������λ��:";
	cin>>m>>n;
	int a,b,c,d;
	cout<<"������������ı߳�:";
	cin>>a;
	cout<<"������Բ����İ뾶���:";
	cin>>b>>c;
	cout<<"����������İ뾶:";
	cin>>d;
	zft t(m,n,a);
	fun(&t);
	yzt q(m,n,b,c);
	fun(&q);
	qt z(m,n,d);
	fun(&z);
}

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
	{cout<<"面积为:"<<0;}
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
		cout<<"正方体体积为:"<<sum;
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
		cout<<"圆柱体的体积为:"<<sum;
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
		cout<<"球体的体积为:"<<sum;
	}
};
void fun(point *p)
{p->area();
cout<<endl;}
void main()
{
	int m,n;
	cout<<"请输入点的位置:";
	cin>>m>>n;
	int a,b,c,d;
	cout<<"请输入正方体的边长:";
	cin>>a;
	cout<<"请输入圆柱体的半径与高:";
	cin>>b>>c;
	cout<<"请输入球体的半径:";
	cin>>d;
	zft t(m,n,a);
	fun(&t);
	yzt q(m,n,b,c);
	fun(&q);
	qt z(m,n,d);
	fun(&z);
}

#include<iostream>

using namespace std;

class point
{
	int x,y;
public:
	point(int a=0,int b=0)
	{x=a;y=b;}
	int rx(){return x;}
	int ry(){return y;}
	void print()
	{
		cout<<"���������϶���Ϊ:("<<x<<","<<y<<")"<<endl;
	}
};

class zf:public point
{
	int l;
	int s;
public:
	zf(int a=0,int b=0,int c=0):point(a,b)
	{l=c;}
	int d(){return l;}
	void print()
	{
		cout<<"�����εı߳�Ϊ:"<<l;
	}
	int s2()
	{
		s=l*l;
		return s;
	}
	void s1()
	{
		cout<<"�����ε����Ϊ:"<<s<<endl;
	}
};

class zt:public zf
{
	int h;
	int v;
public:
	int f(){return h;}
	zt(int a=0,int b=0,int c=0,int d=0):zf(a,b,c)
	{h=d;}
	void print()
	{
		cout<<"�����εĸ�Ϊ:"<<h;
	}
	void v1()
	{
		v=zf::s2()*h;
	}
	void answer()
	{
		cout<<"���������Ϊ:"<<v<<endl;
	}
};

void main()
{
	int a,b,c,d;
	cout<<"��������λ��:";
	cin>>a>>b;
	cout<<endl<<"�����������εĳ�:";
	cin>>c;
	cout<<endl<<"������������ĸ�:";
	cin>>d;
	point f(a,b);
	zf g(a,b,c);
	zt h(a,b,c,d);
	f.print();
	g.s2();
	g.s1();
	h.v1();
	h.answer();
}




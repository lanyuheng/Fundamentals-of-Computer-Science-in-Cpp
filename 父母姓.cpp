#include<iostream>
#include<string.h>
using namespace std;

class father
{
	char *p;
	char *p1;
public:
	father(char *a,char *b)
	{p=a;p1=b;}
	char* get(){return p;}
	void fprint()
	{
		int i=0;
		cout<<"父亲的姓为:";
		while(!(*(p+i))=='\0')
		{
			cout<<*(p+i);
			i++;
		}
		cout<<endl;
		i=0;
		cout<<"父亲的名为:";
		while(!(*(p1+i))=='\0')
		{
			cout<<*(p1+i);
			i++;
		}
		cout<<endl;
	}
};

class mother
{
	char *q;
	char *q1;
public:
	mother(char *b,char *a)
	{q=b;q1=a;}
	void mprint()
	{
		int i=0;
		cout<<"母亲的姓为:";
		while(!(*(q+i))=='\0')
		{
			cout<<*(q+i);
			i++;
		}
		cout<<endl;
		i=0;
		cout<<"母亲的名为:";
		while(!(*(q+i))=='\0')
		{
			cout<<*(q+i);
			i++;
		}
		cout<<endl;
	}
};

class child:public mother,public father
{
	char *a;
public:
	child(char *f,char *m,char *q,char *t,char *b):father(f,m),mother(q,t)
	{a=b;}
	void print()
	{
		int i=0;
		char *t=father::get();
		cout<<"孩子的姓名为:";
		while(!(*(t+i))=='\0')
		{
			cout<<*(t+i);
			i++;
		}
		i=0;
		while(!(*(a+i))=='\0')
		{
			cout<<*(a+i);
			i++;
		}
		cout<<endl;
	}
};

void main()
{
	char a[10],a1[10],b[10],b1[10],c[10];
	cout<<"请输入父亲的姓:";
	cin.getline(a,10);
	cout<<endl<<"请输入父亲的名:";
	cin.getline(a1,10);
	cout<<endl<<"请输入母亲的姓:";
	cin.getline(b,10);
	cout<<endl<<"请输入母亲的名:";
	cin.getline(b1,10);
	cout<<endl<<"请输入孩子的名:";
	cin.getline(c,10);
	cout<<endl;
	cout<<"则此孩子:"<<endl;
	child t(a,a1,b,b1,c);
	t.fprint();
	t.mprint();
	t.print();
}

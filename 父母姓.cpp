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
		cout<<"���׵���Ϊ:";
		while(!(*(p+i))=='\0')
		{
			cout<<*(p+i);
			i++;
		}
		cout<<endl;
		i=0;
		cout<<"���׵���Ϊ:";
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
		cout<<"ĸ�׵���Ϊ:";
		while(!(*(q+i))=='\0')
		{
			cout<<*(q+i);
			i++;
		}
		cout<<endl;
		i=0;
		cout<<"ĸ�׵���Ϊ:";
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
		cout<<"���ӵ�����Ϊ:";
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
	cout<<"�����븸�׵���:";
	cin.getline(a,10);
	cout<<endl<<"�����븸�׵���:";
	cin.getline(a1,10);
	cout<<endl<<"������ĸ�׵���:";
	cin.getline(b,10);
	cout<<endl<<"������ĸ�׵���:";
	cin.getline(b1,10);
	cout<<endl<<"�����뺢�ӵ���:";
	cin.getline(c,10);
	cout<<endl;
	cout<<"��˺���:"<<endl;
	child t(a,a1,b,b1,c);
	t.fprint();
	t.mprint();
	t.print();
}

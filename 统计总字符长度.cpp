#include<iostream>
#include<string.h>
using namespace std;

#define n 3
class A
{
	int length;
	char *d;
	static int totallength;
public:
	void l()
	{
		int i=0;
		while(!(*(d+i))=='\0')
		{length=i+1;
		i++;}
	}
	void p()
	{
		cout<<"���ַ�����Ϊ"<<length;
		totallength+=length;
	}
	void geta(char *a)
	{
		d=a;
	}
	int f()
	{
		int p;
		p=totallength;
		return p;
	}
};
int A::totallength=0;
void main()
{
	int i;
	A a[n];
	for(i=0;i<n;i++)
	{
		char m[80];
		cout<<"��������Ҫ����ĵ�"<<i+1<<"���ַ���:";
		cin.getline(m,80);
		a[i].geta(m);
		a[i].l();
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		a[i].p();
		cout<<endl;
	}
	cout<<"���ַ�����Ϊ:"<<a[n-1].f();
	cout<<endl;
}

		
	


#include<iostream>
#include<string.h>

using namespace std;

class st
{
	char *p;
	int n;
public:
	st(char *a){n=strlen(a)+1;p=new char[n];strcpy(p,a);}
	~st(){delete []p;}
	st & operator+=(st &b)
	{
		char *p1;int n1=n;p1=new char[n1];strcpy(p1,p);
		n+=b.n;delete []p;p=new char[n];strcpy(p,p1);
		delete []p1;
		strcat(p,b.p);
		return *this;
	}
	void print()
	{
		cout<<p;
	}
};

void main()
{
	char p[80],q[80];
	cout<<"请输入a的字符:";
	cin>>p;
	cout<<"请输入b的字符:";
	cin>>q;
	st m(p),n(q);
	m+=n;
	cout<<"连接后的字符为:";
	m.print();
	cout<<endl;
}
		

	

	
#include<iostream>
using namespace std;

class classone
{
	int m;
	friend class classtwo;
public:
	void getone(int n)
	{
		m=n;
	}
	int sizeone()
	{return m;}
};

class classtwo
{
	int n;
public:
	void gettwo(int m)
	{
		n=m;
	}
	int sizetwo()
	{return n;}
	friend void fight(classone &a,classtwo &b)
	{
		if(a.sizeone()>b.sizetwo())
			cout<<"classone����classtwo"<<endl;
		else
			cout<<"classtwo����classone"<<endl;
	}		
};

void main()
{
	int m,n;
	cout<<"����������classone,classtwo��ֵ";
	cin>>m>>n;
	classone q;
	q.getone(m);
	classtwo w;
	w.gettwo(n);
	fight(q,w);
}
	
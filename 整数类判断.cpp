#include<iostream.h>

class integer
{
	int d;
public:
	int getd(){return d;}
	void setd(int m){d=m;}
	void isodd()
	{
		if(d%2==0)
		cout<<"��Ϊż��"<<endl;
		else
			cout<<"��Ϊ����"<<endl;
	}
	void isprime()
	{
		int i;
		for(i=2;i<d;i++)
		{
			if(d%i==0)
			{cout<<"��Ϊ����";
			goto l1;}
		}
		cout<<"��Ϊ����";
l1:cout<<endl;
	}
};

void main()
{
	integer m,n;
	m.setd(15);
	n.setd(31);
	cout<<"�ж�"<<m.getd();
	m.isodd();
	cout<<"�ж�"<<n.getd();
	n.isodd();
	cout<<"�ж�"<<m.getd();
	m.isprime();
	cout<<"�ж�"<<n.getd();
	n.isprime();
}


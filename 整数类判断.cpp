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
		cout<<"得为偶数"<<endl;
		else
			cout<<"得为奇数"<<endl;
	}
	void isprime()
	{
		int i;
		for(i=2;i<d;i++)
		{
			if(d%i==0)
			{cout<<"得为合数";
			goto l1;}
		}
		cout<<"得为质数";
l1:cout<<endl;
	}
};

void main()
{
	integer m,n;
	m.setd(15);
	n.setd(31);
	cout<<"判断"<<m.getd();
	m.isodd();
	cout<<"判断"<<n.getd();
	n.isodd();
	cout<<"判断"<<m.getd();
	m.isprime();
	cout<<"判断"<<n.getd();
	n.isprime();
}


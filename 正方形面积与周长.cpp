#include<iostream.h>

class rectangle
{
	double l;
	double w;
public:
	void set(double m,double n){l=m,w=n;}
	double s(){double s;s=l*w;return s;}
	double c(){double c;c=2*l+2*w;return c;}
};

void main()
{
	double m,n;
	cout<<"�����볤���γ����:";
	cin>>m>>n;
	rectangle a;
	a.set(m,n);
	cout<<"���Ϊ:"<<a.s()<<endl;
	cout<<"�ܳ�Ϊ:"<<a.c()<<endl;
}


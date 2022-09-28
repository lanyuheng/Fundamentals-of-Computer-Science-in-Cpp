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
	cout<<"请输入长方形长与宽:";
	cin>>m>>n;
	rectangle a;
	a.set(m,n);
	cout<<"面积为:"<<a.s()<<endl;
	cout<<"周长为:"<<a.c()<<endl;
}


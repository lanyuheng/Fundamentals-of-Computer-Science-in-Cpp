#include<iostream.h>

class mdata
{
	int m,n;
public:
	void set(int a,int b){m=a,n=b;}
	int max(int a,int b);
	int min(int a,int b);
	int fun1(int a,int b);
	int fun2(int a,int b);
};

int mdata::max(int a,int b)
{
	int i,c,d,k=1;
	if(a<b)
	{c=a;a=b;b=c;}
	if((a%b)==0)
	{for(i=2;i<b;i++)
		{while((b%i)==0)
		goto l;}
l:return i;
	}
	else {while(!k==0)
	{d=a%b;
	a=b;
	b=d;
	k=a%b;
	}
	}
	return b;
}

int mdata::min(int a,int b)
{
	int s,c;
	if(a<b)
	{c=a;a=b;b=c;}
	if((a%b)==0)
		return a;
	else s=a*b/max(a,b);
	return s;
}

int mdata::fun1(int a,int b)
{
	int sum;
	sum=a*a+b*b;
	return sum;
}
int mdata::fun2(int a,int b)
{
	int sum;
	sum=(a+b)*(a+b);
	return sum;
}

void main()
{
	int m,n;
	cout<<"请输入你要处理的两个数:";
	cin>>m>>n;
	mdata h;
	h.set(m,n);
	cout<<"两个数的最小公倍数为:"<<h.max(m,n)<<endl;
	cout<<"两个数的最大公约数为:"<<h.min(m,n)<<endl;
	cout<<"两个数的平方和为:"<<h.fun1(m,n)<<endl;
	cout<<"两个数和的平方为:"<<h.fun2(m,n)<<endl;
}


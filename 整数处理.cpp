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
	cout<<"��������Ҫ�����������:";
	cin>>m>>n;
	mdata h;
	h.set(m,n);
	cout<<"����������С������Ϊ:"<<h.max(m,n)<<endl;
	cout<<"�����������Լ��Ϊ:"<<h.min(m,n)<<endl;
	cout<<"��������ƽ����Ϊ:"<<h.fun1(m,n)<<endl;
	cout<<"�������͵�ƽ��Ϊ:"<<h.fun2(m,n)<<endl;
}


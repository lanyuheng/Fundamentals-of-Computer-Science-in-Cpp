#include<iostream>

using namespace std;

int f1(int a,int b)
{
	int d,h;
	d=a*b;
	h=d/10;
	if(h==0)
	{
		return d;
	}
	else
		return 0;
}

int sum(int *p,int n)
{
	int i=0,s=0;
	for(i=0;i<n;i++)
	{
		s+=*(p+i);
	}
	return s;
}

void main()
{
	int i,n;
	cout<<"请输入你要的n值:";
	cin>>n;
	cout<<endl;
	int a[80];
	a[0]=2;
	a[1]=3;
	for(i=0;i<n-2;)
	{
		if(f1(a[i],a[i+1])==0)
		{
			a[i+2]=(a[i]*a[i+1])/10;
			a[i+3]=(a[i]*a[i+1])%10;
			i=i+2;
		}
		else
		{
			a[i+2]=f1(a[i],a[i+1]);
			i++;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<"数列的和为:"<<sum(a,n);
	cout<<endl;
}





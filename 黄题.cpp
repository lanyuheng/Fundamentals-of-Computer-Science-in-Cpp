#include<iostream>
#include<time.h>

using namespace std;

void main()
{
	double a[50]={0};
	char h;
	const char i='i',r='r',x='x';
	int b,n=20,m,k,p;;
	srand(time(0));
	for(b=0;b<n;b++)
	{
		p=100+rand()%179;
		a[b]=p+(double)(rand()%50)/100;
		cout<<" ";
	}
	for(b=0;b<n;b++)
	{
		cout<<a[b]<<" ";
	}
	cout<<"��������Ҫִ�е�����:"<<endl;
l1:cin>>h;
    switch(h)
	{
	case i:
		{
			m=rand()%n;
			for(k=n-m-1;k>=0;k--)
			{
				p=a[m+k];
				a[m+k]=a[m+k+1];
				a[m+k+1]=p;
			}
			a[m]=rand();
			n++;
			for(b=0;b<n;b++)
	{
		cout<<a[b]<<" ";
	}
			cout<<endl<<"����Ԫ�ظ���Ϊ:"<<n<<endl;
			goto l1;
		}
	case r:
		{
			m=rand()%n;
			for(k=0;k<=n-m-1;k++)
			{
				p=a[m+k];
				a[m+k]=a[m+k+1];
				a[m+k+1]=p;
			}
			a[n-1]=0;
			n--;
				for(b=0;b<n;b++)
	{
		cout<<a[b]<<" ";
	}
				cout<<endl<<"����Ԫ�ظ���Ϊ:"<<n<<endl;
			goto l1;
		}
	case x:cout<<"���������";break;
	}
}
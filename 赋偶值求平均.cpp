#include<iostream.h>

void fun1(int *m);
void fun2(int p[30],double *q);

void main()
{
	int a[30];
	double b[6];
	fun1(a);
	fun2(a,b);
	cout<<"每五个元素平均数为:";
	for(int i=0;i<6;i++)
		cout<<b[i]<<" ";
	cout<<endl;
}

void fun1(int *m)
{
	for(int i=0;i<30;i++)
		*(m+i)=2*(i+1);
}

void fun2(int p[30],double *q)
{
	int sum=0;
	int i,j;
	for(j=0;j<6;j++)
	{
		for(i=j*5;i<j*5+5;i++)
		{
			sum=p[i]+sum;
		}
		q[j]=sum/5;
	}
}


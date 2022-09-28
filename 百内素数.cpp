#include<iostream.h>
void main()
{
	int a[100]={0};
	for(int i=1;i<100;i++)
	{if(a[i]==0)
	{for(int k=2;k<=100/(i+1);k++)
	a[k*(i+1)-1]=1;
	cout<<i+1<<" ";
	}
	}
	cout<<endl;
}

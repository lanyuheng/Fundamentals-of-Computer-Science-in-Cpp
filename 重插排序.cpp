#include<iostream.h>

void main()
{
	int a[11]={2,4,5,8,12,14,16,18,20,30};
	cout<<"请输入一个数字:"<<endl;
	cin>>a[10];
	cout<<endl;
	int i,j,b;
	for(i=0;i<11;i++)
	{for(j=0;j<11-i-1;j++)
			if(a[j]>a[j+1])
			{
				b=a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}
	}
		cout<<"排序后数组为:";
	for(i=0;i<11;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
}


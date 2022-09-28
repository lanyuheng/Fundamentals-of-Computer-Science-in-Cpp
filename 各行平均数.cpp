#include<iostream.h>

void hage(int a[][4],int m,int n)
{
	int hsum=0,i=0,j=0;
	double arg;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			hsum=*(*(a+i)+j)+hsum;
		arg=hsum/n;
		cout<<"第"<<i+1<<"行平均数为:"<<arg<<endl;
		hsum=0;
	}
}

void main()
{
	int array[5][4],i,j;
	cout<<"请按行输入五行四列数组:";
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
		{
			cin>>array[i][j];
		}
		cout<<"结果是:"<<endl;
			hage(array,5,4);
}

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
		cout<<"��"<<i+1<<"��ƽ����Ϊ:"<<arg<<endl;
		hsum=0;
	}
}

void main()
{
	int array[5][4],i,j;
	cout<<"�밴������������������:";
	for(i=0;i<5;i++)
		for(j=0;j<4;j++)
		{
			cin>>array[i][j];
		}
		cout<<"�����:"<<endl;
			hage(array,5,4);
}

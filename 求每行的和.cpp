#include<iostream.h>

void main()
{
	int a[5][3],sum[5]={0};
	int i,j;
	cout<<"按每行输入五行三列数组:"<<endl;
	for(i=0;i<5;i++)
	
		for(j=0;j<3;j++)
		
			cin>>*(a[i]+j);
		
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i]=sum[i]+*(a[i]+j);
		}
	}
	for(i=0;i<5;i++)
	{
		cout<<"每行的和分别为:"<<sum[i]<<endl;
	}
	cout<<endl;
	}



#include<iostream.h>

void main()
{
	int a[5][3],sum[5]={0};
	int i,j;
	cout<<"��ÿ������������������:"<<endl;
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
		cout<<"ÿ�еĺͷֱ�Ϊ:"<<sum[i]<<endl;
	}
	cout<<endl;
	}



#include<iostream.h>

void main()
{
	int a[3][3];
	int i,j;
	cout<<"�밴������������������:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>a[i][j];
	}
	int sum1=0,sum2=0;
	for(i=0;i<3;i++)
	{
		sum1=sum1+*(a[i]+i);
		sum2=sum2+*(a[i]+(2-i));
	}
	cout<<"���Խ�����Ԫ�غ�Ϊ:"<<sum1<<endl;
	cout<<"�ζԽ�����Ԫ�غ�Ϊ:"<<sum2<<endl;
}

		
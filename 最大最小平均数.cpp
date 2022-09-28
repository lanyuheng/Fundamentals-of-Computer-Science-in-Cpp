#include<iostream.h>
void main()

{
	int a[10];
	int i;
	double sum=0;
	cout<<"请输入十个数:"<<endl;
	for(i=0;i<10;i++)
		cin>>a[i];
	int amax=a[0],amin=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<amax)
			amax=a[i];
		if(a[i]<amin)
			amin=a[i];
	}
		for(i=0;i<10;i++)
			sum=sum+a[i];
		double average=sum/10;
		cout<<"其中的最大值为："<<amax<<endl;
			cout<<"其中的最小值为："<<amin<<endl;
				cout<<"他们的平均值为："<<average<<endl;
}

	
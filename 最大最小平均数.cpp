#include<iostream.h>
void main()

{
	int a[10];
	int i;
	double sum=0;
	cout<<"������ʮ����:"<<endl;
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
		cout<<"���е����ֵΪ��"<<amax<<endl;
			cout<<"���е���СֵΪ��"<<amin<<endl;
				cout<<"���ǵ�ƽ��ֵΪ��"<<average<<endl;
}

	
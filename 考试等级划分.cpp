#include<iostream.h>
void main()
{
	int a[10];
	cout<<"������10���˵ĳɼ�:";
	for(int k=0;k<10;k++)
		cin>>a[k];
	for(int i=0;i<10;i++)
	{
		int b=a[i]/10;
		if(b>=9)
			cout<<"ѧ����:"<<i+1<<" "<<"�ȼ�Ϊ:"<<"A"<<endl;
		else if(b<9&&b>=8)
			cout<<"ѧ����:"<<i+1<<" "<<"�ȼ�Ϊ:"<<"B"<<endl;
		else if(b<8&&b>=6)
			cout<<"ѧ����:"<<i+1<<" "<<"�ȼ�Ϊ:"<<"C"<<endl;
		else
			cout<<"ѧ����:"<<i+1<<" "<<"�ȼ�Ϊ:"<<"D"<<endl;
	}
}


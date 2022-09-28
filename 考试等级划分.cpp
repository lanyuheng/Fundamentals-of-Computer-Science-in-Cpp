#include<iostream.h>
void main()
{
	int a[10];
	cout<<"请输入10个人的成绩:";
	for(int k=0;k<10;k++)
		cin>>a[k];
	for(int i=0;i<10;i++)
	{
		int b=a[i]/10;
		if(b>=9)
			cout<<"学号是:"<<i+1<<" "<<"等级为:"<<"A"<<endl;
		else if(b<9&&b>=8)
			cout<<"学号是:"<<i+1<<" "<<"等级为:"<<"B"<<endl;
		else if(b<8&&b>=6)
			cout<<"学号是:"<<i+1<<" "<<"等级为:"<<"C"<<endl;
		else
			cout<<"学号是:"<<i+1<<" "<<"等级为:"<<"D"<<endl;
	}
}


#include<iostream.h>

void main()
{
	char a[20];
	cout<<"������һ���ַ�:";
	cin>>a;
	int na=0,ni=0,i=0;
	while(!(a[i])=='\0')
	{
		if(a[i]=='a')
			na++;
		if(a[i]=='i')
			ni++;
		i++;
	}
	cout<<"�ַ���Ϊ:"<<a<<endl;
	cout<<"����a�ĸ���Ϊ:"<<na<<endl;
	cout<<"����i�ĸ���Ϊ:"<<ni<<endl;
}



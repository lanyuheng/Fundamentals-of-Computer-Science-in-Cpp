#include<iostream.h>

void main()
{
	char a[20];
	cout<<"请输入一串字符:";
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
	cout<<"字符串为:"<<a<<endl;
	cout<<"其中a的个数为:"<<na<<endl;
	cout<<"其中i的个数为:"<<ni<<endl;
}



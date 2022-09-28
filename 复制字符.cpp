#include<iostream.h>
void main()
{
	char a[80],b[80],*m,*n;
	cout<<"请输入一串字符:"<<endl;
	cin>>a;
	int i=0;
	m=a;
	n=b;
	while(!(*(m+i))=='\0')
	{
		*(n+i)=*(m+i);
		i++;
	}
	*(n+i)='\0';
	cout<<"复制后的a为:"<<a<<endl;
	cout<<"复制后的b为:"<<b<<endl;
}




#include<iostream.h>
void main()
{
	char a[80],b[80],*m,*n;
	cout<<"������һ���ַ�:"<<endl;
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
	cout<<"���ƺ��aΪ:"<<a<<endl;
	cout<<"���ƺ��bΪ:"<<b<<endl;
}




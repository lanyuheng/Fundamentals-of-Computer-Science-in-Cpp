#include<iostream.h>

int find(char a[],char ch);
void main()
{
	char m[80],n;
	cout<<"������һ���ַ�:"<<endl;
	cin>>m;
	cout<<"�����������ҵ����ַ�:"<<endl;
	cin>>n;
	if(find(m,n)==0)
		cout<<"��û���ҵ�����Ҫ����:"<<endl;
	else cout<<"��һ�γ��ֵ�λ���ǵ�"<<find(m,n)<<"��"<<endl;
}

int find(char a[],char ch)
{
	int i=0;
	char *k;
	while(!(*(a+i))=='\0')
	{
		i++;
		if(*(a+i-1)==ch)
			goto l;
		k=a+i;
	}
l:if(*k=='\0')
		return 0;
	return i;
}


#include<iostream.h>
#include<string.h>

void declear(char *s1,char *s2)
{
	int i=0,j=0,m=0,n=0;
	while(!(*(s1+n))=='\0')
	{
		n++;
	}
	for(i=0;i<n;i++)
	{
		while(!(*(s1+j))=='\0')
		{
			if(*(s1+j)==*(s2+i))
			{
				m=j;
				while(!(*(s1+m))=='\0')
				{
					*(s1+m)=*(s1+m+1);
					m++;
				}
			}
			j++;
		}
	}
}

void main()
{
	char a[80],b[80];
	cout<<"������һ���ַ�:";
	cin>>a;
	cout<<endl;
	cout<<"����������ɾȥ���ַ�:";
	cin>>b;
	cout<<endl;
	declear(a,b);
	cout<<"�����:"<<a<<endl;
}


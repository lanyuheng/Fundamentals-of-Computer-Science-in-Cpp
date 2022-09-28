#include<iostream.h>

int find(char a[],char ch);
void main()
{
	char m[80],n;
	cout<<"请输入一串字符:"<<endl;
	cin>>m;
	cout<<"请输入你想找到的字符:"<<endl;
	cin>>n;
	if(find(m,n)==0)
		cout<<"并没有找到你需要的数:"<<endl;
	else cout<<"第一次出现的位置是第"<<find(m,n)<<"个"<<endl;
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


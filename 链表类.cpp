#include"chain.h"
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char str[80];
	chain ch;
	cout<<"������һ���ַ�:";
	cin.getline(str,80);
	int l=strlen(str),i;
	for(i=0;i<l;i++)
		ch.insert(i,str[i]);
cout<<"ת�����ַ�Ϊ:"<<ch<<endl;
return 1;
}

#include"chain.h"
#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char str[80];
	chain ch;
	cout<<"ÇëÊäÈëÒ»´®×Ö·û:";
	cin.getline(str,80);
	int l=strlen(str),i;
	for(i=0;i<l;i++)
		ch.insert(i,str[i]);
cout<<"×ª»»ºó×Ö·ûÎª:"<<ch<<endl;
return 1;
}

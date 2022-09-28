#include<iostream.h>
void main()
{
	int a,b,c,sum,m;
	for(a=0;a<=20;a++)
	{for(b=0;b<34;b++)
	{for(c=0;c<=100;c=c+3)
	{sum=a+b+c;
	m=a*5+b*3+(c/3)*1;
	if(m==100&&sum==100)
		cout<<"情况如下:"<<"公鸡:"<<a<<" "<<"母鸡"<<b<<" "<<"小鸡"<<c<<endl;
	}
	}
	}
}
#include<iostream.h>
void main()
{
	int a,b,c,n;
	cout<<"水仙花数有:";
	for(n=100;n<=999;n++)
	{a=n/100;b=n/10-10*a;c=n%10;
	if(a*a*a+b*b*b+c*c*c==n)
		cout<<n<<" ";
	}
	cout<<endl;
}
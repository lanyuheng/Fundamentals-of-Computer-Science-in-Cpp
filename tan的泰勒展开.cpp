#include<iostream.h>
void main()
{
	int i=1,k=1;
	double answer=0,b=0,c=1.0;
	do
	{
		b=c/i;
		i+=2;
		if(k%2==1)
		answer=answer+b;
		else answer=answer-b;
		k++;
	}
	while(b>=1e-6);
		cout<<"½á¹ûÊÇ:"<<answer<<endl;
}

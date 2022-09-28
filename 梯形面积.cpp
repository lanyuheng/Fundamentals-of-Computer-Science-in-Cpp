#include<iostream.h>
#include<math.h>
#define pi 3.1415926

double f1(double x)
{
	return (sin(x)+cos(x));
}
double f2(double n,double a,double b)
{
	double s=0, h=(b-a)/n,i=0.0;
	for(i=1;i<n;i++)
	{
		s=s+f1(a+i*h)*h;
	}
	return s;
}
void main()
{
	double a,b,n,h,s1,s2;
	cout<<"请输入n的值:"<<endl;
	cin>>n;
	a=0,b=pi,h=(b-a)/n;
	s1=((f1(a)+f1(b))/2)*h+f2(n,a,b);
	s2=f2(n,a,b);
	cout<<"梯形法为:"<<s1<<endl;
	cout<<"矩形法为:"<<s2<<endl;
}



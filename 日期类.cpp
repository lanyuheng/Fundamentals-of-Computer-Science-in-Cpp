#include<iostream.h>

class date
{
	int year,month,day;
public:
	void setdate(int y,int m,int d)
	{year=y;month=m>0&&m<13?m:1;day=d;}
	int isleapyear()
	{return(year%400==0)||(year%4==0&&year%100!=0);}
	int getyear(){return year;}
	int getmonth(){return month;}
	int getdate(){return day;}
	void print(){cout<<year<<"."<<month<<"."<<day<<endl;}
	int num(int a,int b,int c);
};
int date::num(int a,int b,int c)
{
	int p,i,sum=0;
	if(isleapyear()==1)
		p=29;
	else p=28;
	int m[12]={31,p,31,30,31,30,31,31,30,31,30,31};
	if(c>p)
		cout<<"����������ڴ���:";
	for(i=0;i<b-1;i++)
	{
		sum=sum+m[i];
	}
	sum=sum+c;
	return sum;
}

void main()
{
	int j,k,l;
	cout<<"��������Ҫ�����������:";
	cin>>j>>k>>l;
	date d1;
	d1.setdate(j,k,l);
	cout<<"����Ϊ"<<d1.getyear()<<"�ĵ�"<<d1.num(j,k,l)<<"��"<<endl;
}


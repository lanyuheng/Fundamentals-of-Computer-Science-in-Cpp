#include<iostream.h>
void main(){
int year,month,day;
cout<<"请依次输入年月日:"<<endl;
cin>>year>>month>>day;
if(year<=0)cout<<"error"<<endl;
if(month<1||month>12)cout<<"error";
if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
{if(day<=31)cout<<"true"<<endl<<year<<"年"<<month<<"月"<<day<<"日";
else cout<<"error";
}
else if(month==2)
{if(year/4)
	{
	if(day<=29)cout<<"true"<<endl<<year<<"年"<<month<<"月"<<day<<"日";
	else cout<<"error";
	}
else
	{
	if(day<=28)cout<<"true"<<endl<<year<<"年"<<month<<"月"<<day<<"日";
	else cout<<"error";
	}
}
else{
	if(day<=30)cout<<"true"<<endl<<year<<"年"<<month<<"月"<<day<<"日";
else cout<<"error";
}
cout<<endl;
}

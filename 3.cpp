#include<iostream.h>
void main(){
double basic,num,finally;
cout<<"������������ʺ�����̨��:";
cin>>basic>>num;
if(num*10800>=100000)
finally=basic+1000*num+num*10800*0.02;
else
finally=basic+1000*num;
cout<<"����=:"<<finally;
}

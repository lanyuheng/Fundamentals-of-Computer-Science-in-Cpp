#include<iostream.h>
void main(){
double basic,num,finally;
cout<<"请输入基本工资和销售台数:";
cin>>basic>>num;
if(num*10800>=100000)
finally=basic+1000*num+num*10800*0.02;
else
finally=basic+1000*num;
cout<<"工资=:"<<finally;
}

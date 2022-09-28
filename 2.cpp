#include<iostream.h>
void main()
{
cout<<"输入一个三位数:";
int a;
cin>>a;
cout<<"a的逆序输出为:"<<(a-a/10*10)<<(a-(a/100)*100)/10<<a/100<<endl;
cout<<a/10<<endl;
}

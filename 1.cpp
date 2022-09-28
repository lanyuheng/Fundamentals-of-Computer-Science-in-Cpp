#include<iostream.h>
#define pi 3.1415926
void main()
{
double d,h;
cout<<"请依次输入底面直径和高:";
cin>>d>>h;
cout<<"表面积"<<2*pi*(d/2)*(d/2)+d*pi*h<<endl;
cout<<"底面周长"<<pi*d<<endl;
cout<<"体积"<<pi*(d/2)*(d/2)*h<<endl;
}
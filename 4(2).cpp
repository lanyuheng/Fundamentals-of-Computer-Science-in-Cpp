#include<iostream.h>
void main(){
int grades;
cout<<"请输入相应的成绩:";
cin>>grades;
if(grades>=85)cout<<"A";
else if(grades>=70)cout<<"B";
else if(grades>=60)cout<<"C";
else cout<<"D";
cout<<endl;
}
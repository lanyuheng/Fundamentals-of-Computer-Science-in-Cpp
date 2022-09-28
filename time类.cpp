#include<iostream.h>
#define N 10;
class Time{
 public:
	 Time(int ho=0,int mom=00,int sec=0){
		 Hour=ho;
		 Moment=mom;
		 Second=sec;
	 }
	  Time operator +(int i){
		Second=Second+i;
		return *this;
	 }
	 Time operator -(int i){
		Second=Second-i;
		return *this;
	 }
	 friend ostream &operator<<( ostream &output, 
                                       const Time &D )
      { 
         output << "时间: " << D.Hour << " :" << D.Moment<<" :"<<D.Second<<endl;
         return output;            
      }

	 Time & operator ++(){
		Second++;
		return Time(Hour,Moment,Second);
	 }
	 Time & operator --(){
		Second--;
		return Time(Hour,Moment,Second);
	 }
	 void output(){
		 if(Hour<=24&&Hour>=0){
		 cout<<"当前时间是:"<<Hour<<"时";
		 }
		 else{
		 cout<<"error";
		 }
		 if(Moment<=60&&Moment>=0){
		 cout<<Moment<<"分";
		 }
		 else{
		 cout<<"error";
		 }
		 if(Second<=60&&Second>=0){
		 cout<<Second<<"秒";
		 }
		 else{
		 cout<<"error";
		 }
		 cout<<endl;
	 }
 private:
	 int Hour,Moment,Second;

};
void main(){
int h1,m1,s1;
cin>>h1>>m1>>s1;
Time t1(h1,m1,s1);
t1=t1+N;
t1.output();
t1=t1-N;
t1.output();
cout<<t1;
++t1;
t1.output();
--t1;
t1.output();
}
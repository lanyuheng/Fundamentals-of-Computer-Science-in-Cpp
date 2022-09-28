#include<iostream.h>
class Time{
 public:
	 Time(int ho=0,int mom=00,int sec=0){
		 Hour=ho;
		 Moment=mom;
		 Second=sec;
	 }
	 void HourSet(int a){
	 if(Hour<=24&&Hour>=0){
		Hour=a;
		 }
		 else{
		 Hour=0;
		 }
	 }
	 void MomentSet(int a){
		if(Moment<=60&&Moment>=0){
		 Moment=a;
		 }
		 else{
		 Moment=0;
		 }
	 }
	 void SecondSet(int a){
		if(Second<=60&&Second>=0){
		 Second=a;
		 }
		 else{
		 Second=0;
		 }
	 }
	 void tick()
	 {
		 
		 if(Second>=60){
		 Moment++;
		 Second=Second-60;
		 if(Moment>=60){
		 Hour++;
		 Moment=Moment-60;
		 }
		 }
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
	 }
 private:
	 int Hour,Moment,Second;

};
void main(){
	int h1,mom1,sec1;
	cin>>h1>>mom1>>sec1;
	Time time(h1,mom1,sec1);
	time.HourSet(h1);
	time.MomentSet(mom1);
	time.SecondSet(sec1);
	time.tick();
	time.output();
}
#include<iostream.h>
class String{
	public:
		String(const char *str){
			Cdata=str;
		}
		String(const String &other){
		Cdata=other.Cdata;
		}
		void output(){
			cout<<Cdata<<endl;
		}
	private:
		const char *Cdata;
};
void main(){

	const char *str1="hello world!",*str2="hello cpp!",*str3="good luck!";
	String s1(str1),s2(str2),s3(str3);
	String ss1=s1,ss2=s2,ss3=s3;
	ss3.output();
	ss2.output();
	ss1.output();
}
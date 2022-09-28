#include<iostream.h>
class Counter{
	public:
		Counter(int a=0)
		{
			dataCount=a;
		}
		void increm()
		{
			dataCount+=dataCount;
		}
		void decrem()
		{	dataCount-=dataCount;
		}
		void output()
		{
			cout<<"µ±Ç°dataCount"<<":"<<"	"<<dataCount<<endl;
		}
	private:
			int dataCount;


};
void main(){
	Counter C1;
	C1.increm();
	C1.decrem();
	C1.output();
}
#include<iostream.h>
class Area{
	public:
		Area()
		{
			p=new int[10];
		}
		void Set(int *s)
		{
			//cout<<*s;
			for(int i=0;i<10;i++)
			{
				*(p+i)=*(s+i);
				//p++;
				//
				
			}
		}
		void output(){
			for(int i=0;i<10;i++)
			{
				cout<<(*(p+i))<<"";
			//	p++;
			}
		}
		~Area(){
			delete []p;
		}
	private:
		int *p;
};
void main(){
Area a1;
int a[10];
int *s;
s=a;
for(int i=0;i<10;i++)
{
	cin>>a[i];
}
a1.Set(s);
a1.output();
}
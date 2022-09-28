#include<iostream>
using namespace std;

class jc
{
	int a;
public:
	int geta(){return a;}
	void seta(int d){a=d;}
	int anwer()
	{
		int sum=1;
		for(int i=1;i<=a;i++)
		sum=sum*i;
		return sum;
	}
};

void main()
{
	jc a[9];
	for(int i=2;i<9;i++)
	{
		a[i].seta(i);
		cout<<i<<"µÄ½×³ËÎª:"<<a[i].anwer()<<endl;
	}
}

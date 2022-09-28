#include<iostream>
using namespace std;

template <class T>
class line
{
	T a,b,c;
public:
	line(T m,T n,T p):a(m),b(n),c(p){}
	T sa(){return a;}
	T sb(){return b;}
	T sc(){return c;}
	friend int cross(line &p,line &q){};
	friend void spot(line &p,line &q){};
};
template<class T>
int cross(line &p,line &q)
{
	double m,n;
	m=p.sa()/q.sa();
	n=p.sb()/q.sb();
	if(m==n)
	{
		{
		if(p.sc()==q.sc())
		cout<<"��ֱ���غ�"<<endl;
		else
		cout<<"��ֱ��ƽ��"<<endl;
		}
		return 0;
	}
	else
	{
		cout<<"��ֱ���ཻ"<<endl;
		return 1;
	}
}
template<class T>
friend int cross(line &p,line &q)
{
	double a,b;
	if(cross(p,q))
	{
		a=(q.sc()*p.sb()-p.sc()*q.sb())/(p.sa()*q.sb()-p.sb()*q.sa());
		b=(q.sc()*p.sa()-p.sc()*q.sa())/(p.sb()*q.sa()-p.sa()*q.sb());
	}
	else
	{
		cout<<"��ֱ�߲����ڽ���"<<endl;
	}
	cout<<"��ֱ�ߵĽ���Ϊ:"<<"("<<a<<","<<b<<")"<<endl;
}
void main()
{
	int a1,a2,a3,b1,b2,b3;
	cout<<"����������aֱ�ߵĲ���:"<<endl;
	cin>>a1>>a2>>a3;
	cout<<"����������bֱ�ߵĲ���:"<<endl;
	cin>>b1>>b2>>b3;
	line a(a1,a2,a3),b(b1,b2,b3);
	cross(a,b);
	spot(a,b);
}


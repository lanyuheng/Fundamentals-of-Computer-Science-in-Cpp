#include<iostream>
using namespace std;

const int max=100;

class set
{
	int len;
	int mem[max];
public:
	set();
	set(const set & setobj);

	inline bool isfull() const;
	inline bool isempty() const;
	inline int size() const;
	inline int ismember(int n) const;

	bool add(int n);
	bool del(int n);

	set insection(const set & setb);
	set operator+(const set & setb);
	void operator=(const set & setb);
	set operator*(const set & setb);
	set operator-=(const set & setb);

	void display() const;
	void input();
};

set::set():len(0){}

set::set(const set & setobj)
{
	for(len=0;len<setobj.len;len++)
	{
		mem[len]=setobj.mem[len];
	}
}

int set::size() const
{
	return len;
}

bool set::isempty() const
{
	return len==0;
}

bool set::isfull() const
{
	return len==max;
}

int set::ismember(int n) const
{
	for (int index = 0; index < len; index++)
	{
		if (mem[index] == n) 
			return index + 1;
	}
	return -1;
}

void set::display() const
{
	for (int index = 0; index < len;index++)
		cout<<mem[index]<<" ";
	cout<<endl;
}

bool set::add(int n)
{
	if(isfull()) 
		return false;
	else if (ismember(n)!= -1){}
	else
	{
		mem[len++] = n;
	}
	return true;
}

bool set::del(int n)
{
	int loc = ismember(n);
	if (isempty()||(loc == -1)) 
		return false;
	for (int index = loc; index < len; index++)
	{
		mem[index - 1] = mem[index];
	}
	len--;
	return true;
}

set set::operator +(const set & setb)
{
	set setc(setb);
	for (int index = 0;index < len;index++)
	{
		setc.add(mem[index]);
	}
	return setc;
}

set set::operator *(const set & setb)
{
	set setc;
	for (int index = 0;index<len;index++)
	{
		for(int indexb=0;indexb<setb.len;indexb++)
		{
			if(setc.ismember(setb.mem[indexb]*mem[index])==-1)
			{
				setc.add(setb.mem[indexb]*mem[index]);
			}
		}
	}
	return setc;
}

void set::operator =(const set & setb)
{
	set setc;
	for(int index=0;index<len;index++)
	{
		del(mem[index]);
	}
	for(int indexb=0;indexb<setb.len;indexb++)
	{
		add(setb.mem[index]);
	}
}

set set::operator -=(const set & setb)
{
	set setc,setd;
	setc=insection(setb);
	for(int index=0;index<setc.len;index++)
	{
		setd.add(setc.mem[index]);
	}
	return setd;
}

set set::insection(const set & setb)
{
	set setc;
	for (int index = 0;index < len;index++)
	{
		for (int indexB = 0;indexB < setb.len;indexB++)
		{
			if (mem[index] == setb.mem[indexB])
				setc.add(mem[index]);
		}
	}
	return setc;
}

void set::input()
{
	int nSize;
	cout<<" �����뼯�ϵĴ�С:\n";
	cin>>nSize;
	cout<<" �����뼯��Ԫ��:\n";
	for (int i = 0,elem; i < nSize ;i++)
	{
		cin>>elem;
		add(elem);
	}
}

int main()
{
	int n;
	set a,b,c;
	cout<<"a";
	a.input();
	cout<<"b";
	b.input();
	cout<<"a=";
	a.display();
	cout<<"b=";
	b.display();
	cout<<"a+b=";
	c=a+b;
	c.display();
	cout<<"a*b=";
	c=a*b;
	c.display();
	cout<<"a-=b��aΪ";
	c=a-=b;
	c.display();
	cout<<" ��a��ѡ��Ҫɾ����Ԫ�أ�";
	cin>>n;
	a.del(n);
	cout<<"a=";
	a.display();
	cout<<" ��b��ѡ��Ҫɾ����Ԫ�أ�";
	cin>>n;
	b.del(n);
	cout<<"b=";
	b.display();
	cout<<" ����Ҫ���ӵ�����a �е�Ԫ�أ�";
	cin>>n;
	if (!a.add(n))
		cout<<" ����ʧ��, ����a������";
	else
	{
		cout<<"a=";
		a.display();
	}
	cout<<" ����Ҫ���ӵ�����b�е�Ԫ�أ�";
	cin>>n;
	if (!b.add(n)) cout<<" ����ʧ��, ����b������";
	else
	{
		cout<<"b=";
		b.display();
	}
	return 0;
}











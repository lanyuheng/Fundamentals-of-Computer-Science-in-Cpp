#include <iostream.h>
class Myarray
{
protected:
int *alist;
    int length;
public:
    Myarray(int len)
    {
		alist=new int[len];length=len;
	}
    ~Myarray()
    {
		delete(alist);cout<<"调用析构函数"<<endl;
	}
    void input()
    {
        int i;
        for(i=0;i<length;i++)
        {
        cin>>alist[i];}
		}
    int getlen(){return length;}
    void display()
    {
		for(int i=0;i<length;i++)
		cout<<alist[i]<<' ';
		cout<<endl;
    }
};
class averarray:virtual public Myarray
{
public:
    averarray(int n):Myarray(n)
    {}
    float getaver()
    {
		float aver;
		int sum=0,i;
		for(i=0;i<length;i++)
		sum+=alist[i];
		aver=(float)sum/length;
		return aver;
    }
};
class rearray:virtual public Myarray
{
public:
    rearray(int n):Myarray(n)
    {}
    void turn()
{
        int i,t;
        for(i=0;i<length/2;i++)
        {
			t=alist[i];
			alist[i]=alist[length-i-1];
			alist[length-i-1]=t;
		}
    }
};
void main()
{
   averarray a1(10);
   a1.input();
   cout<<a1.getaver()<<endl;
   rearray r1(10);
   r1.input();
   cout<<"反序输出为：";
   r1.turn();
   r1.display();
}





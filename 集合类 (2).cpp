#include<iostream>

using namespace std;

class Set
{
public:
    Set() 
	{
        this->number = 0;
        memset(this->items,0,sizeof(items));
    }
    int init(int items[], int num);
    bool add_item(int item);
    bool remove_item(int item);
    Set operator+ (Set set2);
    Set operator* (Set set2);
	//void operator= (Set set2);
	void operator-= (Set set2);
    void display();
    int is_exist(int item);
	void input();
private:
    int items[100]; 
    int number; //定义number表示集合中元素的个数
};
void Set::display()
{
	for(int i=0;i<this->number;i++)
		cout<<items[i]<<" ";
	cout<<endl;
}
int Set::is_exist(int item)
{
    for(int i=0; i< this->number; i++) 
	{
        if(this->items[i] == item)
		{
            return i;
        }
    }
    return -1;
}
bool Set::add_item(int item)
{
    if(is_exist(item) >= 0 || this->number >= 100) 
	{
        return false;
    }
    this->items[this->number] = item;
    this->number++;
    return true;
}
bool Set::remove_item(int item)
{
    int pos = is_exist(item);
    if(pos == -1) return false;
    for(int i=pos; i< this->number-1; i++) 
	{
        this->items[i] = this->items[i+1];
    }
    this->number--;
    return true;
}
Set Set::operator* (Set set2)
{
    Set result;
    for(int i=0; i< this->number; i++) 
	{
        if(set2.is_exist(this->items[i]) >= 0) 
		{
            result.items[result.number] = this->items[i];
            result.number++;
        }
    }
    return result;
}
Set Set::operator+ (Set set2)
{
    Set result;
	result.number=0;
    for(int i=0; i<this->number; i++) 
	{
        result.add_item(this->items[i]);
    }
    for(int j=0; j<set2.number; j++) 
	{

        if(result.is_exist(set2.items[j]) == -1) 
		{
			result.add_item(set2.items[i]);
        }
    }
    return result;
}
/*void Set::operator =(Set set2)
{
	for(int i=0;i<this->number;i++)
	{
		this->items[i]=set2.items[i];
	}
}*/
void Set::operator -=(Set set2)
{
	Set result;    
    int i=0,j=0,k=0;   
    for(i=0;i<this->number;i++)  
	{   
		k=0;
        for(j=0;j<this->number;j++)  
		{  
			if(set2.is_exist(items[j]) == -1) 
		{
			result.add_item(items[j]);
			k++;
        }
		}
		this->number=k;
	for(i=0;i<this->number;i++)
	{
		items[i]=result.items[i];
	}
	}
}
void Set::input()
{
	int size, elem;
	cout<<" 请输入集合的大小:";
	cin>>size;
	cout<<" 请输入集合元素:";
	for (int i = 0; i < size ;i++)
	{
		cin>>elem;
		add_item(elem);
	}
}

int main()
{
	int n;
	Set a,b,c;
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
	cout<<"a-=b为";
	a-=b;
	a.display();
	cout<<"a=b为";
	a=b;
	a.display();
	cout<<" 从a中选择要删除的元素：";
	cin>>n;
	a.remove_item(n);
	cout<<"a=";
	a.display();
	cout<<" 输入要增加到集合a 中的元素：";
	cin>>n;
	a.add_item(n);
	cout<<"a=";
	a.display();
	return 0;
}


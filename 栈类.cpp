#include<iostream>
#include <string>
using  std::string;
using namespace std;
template <class T>  
class Stack  
{  
public:  
    Stack(unsigned int size=100);
    ~Stack();  
    void push(T val);
    T pop(T &x);  
private:  
    unsigned int size;  
    unsigned int sp;
    T *data;
}; 
template <class T>  
Stack<T>::Stack(unsigned int length) 
{  
    size=length;
    data=new T[length];  
    sp=0;  
}   
template <class T>  
Stack<T>::~Stack()  
{  
    delete []data;  
}  
template <class T>  
void Stack<T>::push(T val)  
{  
    data[sp++]=val;  
}  
template <class T>  
T Stack<T>::pop(T &x)  
{  
    x= data[--sp]; 
	return x;
} 
void  main()  
{  
    Stack<int> intstack(100);  
    intstack.push(1);  
    intstack.push(2);  
    intstack.push(3); 
	int x,y,z;
    cout<<intstack.pop(x)<<endl;  
    cout<<intstack.pop(y)<<endl;  
    cout<<intstack.pop(z)<<endl;  
    string s1,s2,s3; 
    Stack<string>  stringstack(100);  
    stringstack.push("abc");  
	stringstack.push("def"); 
	stringstack.push("hij");  
    cout<<stringstack.pop(s1)<<endl; 
	cout<<stringstack.pop(s2)<<endl;
	cout<<stringstack.pop(s3)<<endl;
    
} 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream is("something.txt",ifstream::binary);
	ofstream os("out.txt",ifstream::binary);
		is.seekg(0,is.end);
		int length=is.tellg();
		is.seekg(0);
		char *buffer=new char [length];
		is.read(buffer,length);
		for(int i=0;i<length;i++)
		{
			if(*(buffer+i)==32||*(buffer+i)==10||*(buffer+i)==13)
					*(buffer+i)=*(buffer+i);
			else *(buffer+i)=((*(buffer+i)+3)-97)%26+97;
		}
		os.write(buffer,length);
		delete[] buffer;
		is.close();
		os.close();
	return 0; 
}
	

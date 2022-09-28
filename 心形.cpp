#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	int x,y; 
	cout<<endl;
	cout<<setw(15)<<"*"<<setw(4)<<"****"<<setw(28)<<"*****"<<endl;
	cout<<setw(11)<<"*"<<setw(9)<<"***********"<<setw(29)<<"************"<<endl;
	cout<<setw(7)<<" "<<setw(15)<<"******************"<<setw(29)<<"******************"<<endl;
	cout<<setw(5)<<"*"<<setw(20)<<"**********************"<<setw(30)<<"***********************"<<endl;
	cout<<setw(3)<<"*"<<setw(25)<<"**************************"<<setw(30)<<"***************************"<<endl;
	cout<<setw(2)<<"*"<<setw(28)<<"****************************"<<setw(30)<<"*****************************"<<endl;
	for(x=1;x<=30;x++)
	{
		cout<<" ";
		cout<<setfill(' ')<<setw(x++);
			for(y=65;y>x*2+2;y--)
				cout<<"*";
			cout<<endl;
	}
	cout<<setw(31)<<"*"<<endl<<endl;
	cout<<setw(17)<<" "<<"My heart is belong to you!"<<endl<<endl;
}

# include <iostream.h>
# include <conio.h>
void main()
{
int i=0;
char str[10]="\0";
cout<<"�������������:"<<endl;
while(1)
{
	str[i]=getch();
	if(str[i++]=='\r')
		break;
	cout<<" ";
}
cout<<endl<<"\n���������:"<<str<<endl;
}

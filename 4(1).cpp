#include<iostream.h>
void main(){
char grade;
cout<<"��������Ҫ��ѯ�ĳɼ�����:";
cin>>grade;
switch(grade){
	case 'A':case 'a':
		cout<<">=85";break;
		case 'B':case 'b':
			cout<<"70-85";break;
			case 'C':case 'c':
			cout<<"60-70";break;
			case 'D':case 'd':
			cout<<"<60";break;
			default:
				cout<<"error";break;
		}
cout<<endl;
}

#include<iostream.h>
void main()
{
	int a,b;
	cout<<"������������:"<<endl;
	cin>>a>>b;
	switch(b)
	{case 1:cout<<"����Ϊ:"<<"30";break;
	case 2:
		if(a%4==0)
		{if(a%400==0)
			cout<<"����Ϊ:"<<"29";
			else if(a%100==0)
				cout<<"����Ϊ:"<<"28"<<endl;
				else
				cout<<"����Ϊ:"<<"29"<<endl;
		}break;
		case 3:cout<<"����Ϊ:"<<"30"<<endl;break;
			case 4:cout<<"����Ϊ:"<<"30"<<endl;break;
				case 5:cout<<"����Ϊ:"<<"30"<<endl;break;
					case 6:cout<<"����Ϊ:"<<"30"<<endl;break;
						case 7:cout<<"����Ϊ:"<<"30"<<endl;break;
							case 8:cout<<"����Ϊ:"<<"30"<<endl;break;
								case 9:cout<<"����Ϊ:"<<"30"<<endl;break;
									case 10:cout<<"����Ϊ:"<<"30"<<endl;break;
										case 11:cout<<"����Ϊ:"<<"30"<<endl;break;
											case 12:cout<<"����Ϊ:"<<"30"<<endl;break;
	}

}
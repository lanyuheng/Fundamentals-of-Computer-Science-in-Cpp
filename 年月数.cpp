#include<iostream.h>
void main()
{
	int a,b;
	cout<<"请输入年月日:"<<endl;
	cin>>a>>b;
	switch(b)
	{case 1:cout<<"天数为:"<<"30";break;
	case 2:
		if(a%4==0)
		{if(a%400==0)
			cout<<"天数为:"<<"29";
			else if(a%100==0)
				cout<<"天数为:"<<"28"<<endl;
				else
				cout<<"天数为:"<<"29"<<endl;
		}break;
		case 3:cout<<"天数为:"<<"30"<<endl;break;
			case 4:cout<<"天数为:"<<"30"<<endl;break;
				case 5:cout<<"天数为:"<<"30"<<endl;break;
					case 6:cout<<"天数为:"<<"30"<<endl;break;
						case 7:cout<<"天数为:"<<"30"<<endl;break;
							case 8:cout<<"天数为:"<<"30"<<endl;break;
								case 9:cout<<"天数为:"<<"30"<<endl;break;
									case 10:cout<<"天数为:"<<"30"<<endl;break;
										case 11:cout<<"天数为:"<<"30"<<endl;break;
											case 12:cout<<"天数为:"<<"30"<<endl;break;
	}

}
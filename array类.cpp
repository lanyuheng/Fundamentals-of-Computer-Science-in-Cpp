#include<iostream.h>
class Array{
	public:
		Array(){
			for(int i=0;i<10;i++)
			{
				data[i]=0;
			}
		}
		int& getData(int i){
			return data[i];
		}
		void output(){
		for(int i=0;i<10;i++){
			cout<<data[i]<<" ";
			}
		}
		void input(){
			for(int i=0;i<10;i++){
			cin>>data[i];
			}
		}
	private:
	int data[10];
};
void main(){
Array a1;
a1.input();
cout<<"���ص��±�Ϊ:";
int i;
cin>>i;
i=a1.getData(i);
cout<<i<<endl;
cout<<"����ֵΪ:"<<endl;
a1.output();



}
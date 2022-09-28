#include<iostream.h>
class Ration{
	public:
		Ration(int mem=1,int den=1)
		{
			member=mem;
			denominator=den;

		}
		void Add(Ration &A){
		member=member*A.denominator+A.member*denominator;
		denominator=denominator*A.denominator;
		}
		void Sub(Ration &A){
		member=member*A.denominator-A.member*denominator;
		denominator=denominator*A.denominator;
		}
		void Mul(Ration &A){
		member=member*A.member;
		denominator=denominator*A.denominator;
		}
		void Div(Ration &A){
		member=member*A.denominator;
		denominator=denominator*A.member;
		}
		void Frac(){
			for(int i=2;i<=member&&i<=denominator;i++){
				if(member%i==0 && denominator%i==0){
				member/=i;
				denominator/=i;
				i=1;
				}
			}
		}
		void output(){
		cout<<endl<<member<<"/"<<denominator<<endl;
		}
	private:
		int member,denominator;
};
void main(){
int m1,d1;
cin>>m1>>d1;
int m2,d2;
cin>>m2>>d2;
Ration r1(m1,d1);
Ration r2(m2,d2);
r1.Add(r2);
r1.Frac();
r1.output();
r1.Sub(r2);
r1.Frac();
r1.output();
r1.Mul(r2);
r1.Frac();
r1.output();
r1.Div(r2);
r1.Frac();
r1.output();
}
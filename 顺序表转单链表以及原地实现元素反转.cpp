#include"seqlist.h"
#include"chain.h"
#include<iostream>
#include<string.h>

using namespace std;

void seqtochain(seqlist &a,chain &b){
	char x;
	b.clearlist();
	int i=0;
	while(i<a.Length()){
		a.find(i,x);
		b.insert(i,x);
		i++;
	}
}

void chain::reverse(){
	node *current=head->next,
		*next,
		*last=0;
	while((current)!=0){
		next=current->next;
		current->next=last;
		last=current;
		current=next;
	}
	head->next=last;
}

void main()
{
	chain ch;
	char a[80];
	cout<<"ÇëÊäÈëÒ»´®×Ö·û:";
	cin.getline(a,80);
	int l=strlen(a),i;
	for(i=0;i<l;i++){
		ch.insert(i,a[i]);
	}
	ch.reverse();
	cout<<"×ª»»ºó×Ö·ûÎª:"<<ch<<endl;
}








#include<iostream>
using namespace std;
int main(){
	int x,temp=0,temp1=0,cont=0;
	bool cond=false;
	cin>>x;
	while(cond==false){	
		if(((x==temp)&&(temp1==x))&&(x==9)){
			cond=true;
		}
		else if((x==temp)&&(temp1==x)){
			cont++;
		}
		else
			temp1=temp;
			temp=x;
			if(cond==false){
			cin>>x;
			}
}
		cout<<cont;
	return 0;
}

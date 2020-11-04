#include<iostream>
using namespace std;
int main(){
	char x,temp;
	int cont=0;
	bool cond=false;
	cin>>x;
	while(cond==false){
		if((temp=='o')&&(x=='k')){
			cond=true;
		}
		else
			cont++;
			if(cond==false){
			temp=x;
			cin>>x;
	}
}
	cout<<cont-1;
	return 0;
}

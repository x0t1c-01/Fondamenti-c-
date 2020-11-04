#include<iostream>
using namespace std;
int main(){
	int X,x,y=-1,cont=1;
	bool cond=false;
	cin>>X;
	cin>>x;
	while(x!= -1){
	 	if(x==y){
	 		if(x==0)
			cont++;
			if(cont>=X)
				cond=true;
		}
		else
			cont=1;
			y=x;
			cin>>x;
		}
		if(cond)
			cout<<"OK";
		else
			cout<<"NO";
	return 0;
}

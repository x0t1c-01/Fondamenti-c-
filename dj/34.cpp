#include<iostream>
using namespace std;
int main(){
	int X,temp=0,n,cont=1;
	bool pc=true,dis=true;
	cin>>X;
	cin>>n;
	temp=n;
	while(cont<X){
		cin>>n;
		if(cont%2==0){
			if(n<=temp){	
				pc=false;
			}
			temp=n;
		}
		else{
			if(n%2==0){
				dis=false;
			}
		}
	cont++;	
	}
	if(pc&&dis)
	cout<<"SI";
	else
	cout<<"NO";
	return 0;
}

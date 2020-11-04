#include<iostream>
using namespace std;

int main(){
	int x,temp=-49;
	bool cond=false;
	cin>>x;
	
	while(x!=0){
			if(((x%2==0)&&(temp%2==0))||(((x+temp)%x==0)||((x+temp)%temp==0))){
				cond=true;
			}
			temp=x;
			cin>>x;
		}
		if(cond)
			cout<<"SI";
		else
			cout<<"NO";
	return 0;
}

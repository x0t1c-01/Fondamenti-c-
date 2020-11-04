#include<iostream>
using namespace std;
bool esistezeri(int);

int main(){
	int n,pos=-1;
		cin>>n;	
	int v[100];
	
	for(int i=0 ;i<n;i++)
		cin>>v[i];
	for(int i=0;i<n;i++){
		if(esistezeri(v[i])){
			pos=i;
		}
	
	}
	cout<<pos;
	
	return 0;
}

bool esistezeri(int x){
	int temp;
	while(x>0){
		temp=x%10;
		x/=10;
		if(temp==0)
			return true;
	}
	return false;
}

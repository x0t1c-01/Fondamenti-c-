#include<iostream>
using namespace std;
int main(){
	bool div=false;
	int cont=0;
	int a[10];
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
		int X;
		cin>>X;
		for(int i=0;i<10;i++){
			if(a[i]%X==0){
				div=true;
				cont++;
			}
			else 
				div=false;
	}
	if(cont==0)
		cout<<"OK";
	else
		cout<<"NO";
	
	return 0;
}

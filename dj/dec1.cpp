#include<iostream>
using namespace std;

bool control(char a[],int x){
	int cont=0;
	for(int i=0;i<x;i++){
		for(int j=i+1;j<x;j++){
			if(a[i]==a[j]){
				if((a[i]!='*')&&(a[j]!='*')){
					a[i]='*';
					a[j]='*';			
				}
				break;		
			}
		}
	}
	for(int i=0;i<x;i++){
		if(a[i]!='*')
			cont++;
	}
	if(cont>1)
		return false;
		
	return true;
}

int main(){
	int x;
	char a[100];
	cin>>x;
	for(int i=0;i<x;i++){
		cin>>a[i];
	}	
	
	if(control(a,x))
		cout<<"SI";
	else
		cout<<"NO";
		
	
	
	
	return 0;
}

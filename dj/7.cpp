#include<iostream>
using namespace std;
int main(){
	int a;
	bool multiplo5=false;
	cin>>a;
	
	while(a!=5){
		if(a%5==0)
		multiplo5=true;
		cin>>a;
	}
	if(multiplo5)
    	cout<<"ALMENO 1";
	else
		cout<<"NESSUNO";
		return 0;	
}

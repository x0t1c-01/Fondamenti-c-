#include<iostream>
using namespace std;


int main(){
	int cont1=0,cont2=0;
	char a[100];
	char b[100];
		for(int i=0;i<100;i++){
			cin>>a[i];
			if(a[i]=='.')
				break;
			else	
				cont1++;
		}
	
	for(int i=0;i<100;i++){
			cin>>b[i];
			if(b[i]=='.')
				break;
			else
				cont2++;
		}
	bool cond=false;
	for(int i=0;i<cont1;i++){
		for(int j=0;j<cont2;j++){
			if(a[i]==b[j]){
				cond=true;
				cout<<a[i];
			}
		}
		if(cond)
			break;
	}
	if(!cond)
	cout<<"DISGIUNTE";
	return 0;
}

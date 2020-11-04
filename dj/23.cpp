#include<iostream>
using namespace std;
int main(){
	char x;
	bool vocale=false;
	while (x!='*'){
	switch(x){
		case 'a':
		case 'e':
		case 'i':		
		case 'o':		
		case 'u':			
		vocale=true;
	}
		cin>>x;
	}
	if(vocale==true)
		cout<<"ALMENO 1 VOCALE";
	else 
		cout<<"NESSUNA VOCALE";
	return 0;
}

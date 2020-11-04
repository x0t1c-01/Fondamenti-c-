#include<iostream>
using namespace std;

int main(){
	int n,somma(0);
	bool error=0, vuoto=0;
	cin>>n;
	if(n==-1){
	vuoto=1;
	}	
	while(n!=-1){	
		if(n%10==n){
			somma=(somma*10)+n;
		}	
		else 
		error=1;
	cin>>n;
	}
	if(somma%3==0 &&!error&&!vuoto)
		cout<<somma<<endl<<"SI";
	else if(!error&&!vuoto)
	cout<<somma<<endl<<"NO";
	else if(error&&!vuoto)
	cout<<"ERRORE";
	else 
	cout<<"VUOTO";		
  return 0;
}


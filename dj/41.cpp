#include<iostream>
using namespace std;


int main(){
	int v[10]={0};
	int cont=0;
	int n;
	char c;	
	while(cont<=10){
		cout << " Digitare 1 per fumatori o 2 per non fumatori: ";
		cin>>n;
		if(n==1){
			if(cont<6){
				for(int i=0;i<5;i++)
					if(v[i]==0){
						v[i]==1;
						cout << " Reparto fumatori, posto " << i+1 << endl << endl;
						cont++;
					}		
				}
			else
				cout << "  Reparto scelto al completo. Si desidera un posto nell'altro " << "reparto (S/N)? ";
				cin>>c;
				if(c=='S')
					
			}	
		
		
		
		
		
	}	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}

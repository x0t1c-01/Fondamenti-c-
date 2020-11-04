#include<iostream>
using namespace std;

int TellNumber(int riga,int colonna,int n){
	if(riga<=(n/2)-1&&colonna<=(n/2)-1){
		return (colonna<riga ? colonna : riga);
	}
	if(riga<=(n/2)-1&&colonna>=(n/2)-1){
		colonna=n-1-colonna;
		return (colonna<riga ? colonna : riga);
	}
	if(riga>=(n/2)-1&&colonna<=(n/2)-1){
		riga=n-1-riga;
		return (colonna<riga ? colonna : riga);
	}
	if(riga>=(n/2)-1&&colonna>=(n/2)-1){
		riga=n-1-riga;
		colonna=n-1-colonna;
		return (colonna<riga ? colonna : riga);
	}
	return 0;
}

void trova(int a[][100],int n,int cornice,int riga,int colonna){
	int cont=0;
	int b=a[riga][colonna];
	if(b==0){
		cout<<a[cornice][cornice];
	}
	else
		while(cont<=b){
		for(int j=cornice;j<n-cornice;j++){
			
			if(cont==b)
				cout<<a[cornice][j];
			
			cont++;
		}
		for(int i=cornice;i<n-cornice;i++){
			
			if(cont==b)
				cout<<a[i][n-cornice];
		
			cont++;
		}
		for(int j=n-cornice;j>cornice;j--){
			
			if(cont==b)
				cout<<a[n-cornice][j];
		
			cont++;
		}
		for(int i=n-cornice;i>cornice;i--){
			
			if(cont==b)
				cout<<a[i][cornice];
	
			cont++;
		}
	}	
}

int main(){
	int n;
	int a[100][100];
	int riga,colonna;
	
		cin>>n;
		
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		
		cin>>riga;
		cin>>colonna;
		
	cout<<TellNumber(riga,colonna,n);	
	trova(a,n,TellNumber(riga,colonna,n),riga,colonna);
	
	
	return 0;
}

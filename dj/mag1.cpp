#include<iostream>
using namespace std;

void TellNumber(int riga,int colonna,int n){
	if(riga<=(n/2)-1&&colonna<=(n/2)-1){
		cout<<(colonna<riga ? colonna : riga);
	}
	if(riga<=(n/2)-1&&colonna>=(n/2)-1){
		colonna=n-1-colonna;
		cout<<(colonna<riga ? colonna : riga);
	}
	if(riga>=(n/2)-1&&colonna<=(n/2)-1){
		riga=n-1-riga;
		cout<<(colonna<riga ? colonna : riga);
	}
	if(riga>=(n/2)-1&&colonna>=(n/2)-1){
		riga=n-1-riga;
		colonna=n-1-colonna;
		cout<<(colonna<riga ? colonna : riga);
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
	
		TellNumber(riga,colonna,n);
	
	
	return 0;
}

#include<iostream>
using namespace std;

void multiplica(int b[100][100],int a[],int riga, int colonne){
	
	for(int i=0;i<riga;i++){
		int somma=0;
		for(int j=0;j<colonne;j++){
			somma+=b[i][j]*a[j];
			}
		if(i!=riga-1)
			cout<<somma<<" ";
		else
			cout<<somma;
	}
	
}

int main(){
	int n,m,a[100],b[100][100];
	cin>>n>>m;
	
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>b[i][j];
		}
	}
	multiplica(b,a,n,m);
	return 0;
}

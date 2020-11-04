#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int n,m,somma;
	cin>>n;
	cin>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	bool cond[n];
		for(int i=0;i<n;i++){
			cond[i]=false;
		}
	for(int i=0;i<m;i++){
		somma=0;
		for(int j=0;j<n;j++){
			somma+=a[j][i];
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(somma==a[i][j])
					cond[i]=true;
			}
		}
	}
	
int cont=0;	
		for(int i=0;i<n;i++){
			if(cond[i]==true){
				cont++;
			}
}
	cout<<cont;
	
	return 0;
}

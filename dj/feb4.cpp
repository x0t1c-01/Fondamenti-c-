#include<iostream>
using namespace std;
int poscantante(int n,int m, int v[][100]){
	int punt=0,puntmin=40,pos2;
	for(int j=0;j<n;j++){
		punt=0;
		for(int i=0;i<m;i++){
			punt+=v[i][j];
		}
		if(puntmin>=punt){
			puntmin=punt;
			pos2=j;
		}
	}
return pos2;
}
int giudice(int n,int m,int v[20][100]){
	int cont=0,contmax=0,pos;
	for(int i=0;i<m;i++){
		cont=0;
		for(int j=0;j<n;j++){
			if(v[i][j]>5)
				cont++;
		}
		if(contmax<=cont){
			contmax=cont;
			pos=i;
		}
	}
	return pos;
}
int main(){
	int m,n,cont=0,contmax=0,pos2,pos;
	cin>>m>>n;
	
	int v[20][100];
	
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			cin>>v[i][j];
			
	pos=giudice(n,m,v);
	pos2=poscantante(n,m,v);

	cout<<pos<<' '<<pos2;
	return 0;
}

#include<iostream>
using namespace std;

int calc(int a[][100],int dim,int indin,int indfin){
	
	int somma;
	for(int i=indin;i<indfin;i++){
		for(int j=0;j<dim;j++){
		somma+=a[i][j];
		}
	}
	return somma;
}

int main(){
	int a[100][100],dim,somma,indin,indfin,somma1;
	cout<<"insert dim";
	cout<<endl;
	cin>>dim;
	for(int i=0;i<dim;i++){	
		for(int j=0;j<dim;j++)
		cin>>a[i][j];
	}
		indin=0;
		indfin=dim/2;
		somma=calc(a,dim,indin,indfin);
		indin=indfin;
		indfin=dim;
		somma1=calc(a,dim,indin,indfin);
		cout<<somma<<endl<<somma1;
	
	return 0;
}

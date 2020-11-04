#include<iostream>
using namespace std;

bool som(int a[][100],int dim,int somma,int riga){
	int b[100],cont=0,cont2=0;
	int somma1=0;
	if(riga==dim){
		return true;
	}	
		somma1=0;
		for(int j=0;j<dim;j++){
			somma1+=a[riga][j];
		}
		if(somma!=somma1)
			return false;
	som(a,dim,somma,riga+=1);
}

int main(){
	int a[100][100],dim,riga=1,somma=0;
	cout<<"insert dim"<<endl;
	cin>>dim;
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++)
			cin>>a[i][j];	
	}
		for(int j=0;j<dim;j++){
			somma+=a[0][j];
		}
	if(som(a,dim,somma,riga))
		cout<<"SI";
	else
		cout<<"NO";
	
	return 0;
}

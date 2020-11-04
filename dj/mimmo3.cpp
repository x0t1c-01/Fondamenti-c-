#include<iostream>
using namespace std;

bool control(int a[][100],int b[],int dim,int riga){	
	int cont=0;
	if(riga==dim){
		return false;
	}
		cont=0;
		for(int j=0;j<dim;j++){
			if(a[riga][j]==b[j])
				cont++;			
			if(cont==dim)
				return true;
		}
	control(a,b,dim,riga+=1);
}

int main(){
	int a[100][100],b[100],dim,riga=0;
	cout<<"insert dim"<<endl;
	cin>>dim;
	cout<<"da55al el array : "<<endl;
	for(int i=0;i<dim;i++){
		cin>>b[i];
	}
	cout<<"d5l matrice"<<endl;
	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			cin>>a[i][j];
		}
	}
	if(control(a,b,dim,riga)){
		cout<<"SI";
	}
	else
	 cout<<"NO";
	
	
	
	
	
	
	return 0;
}

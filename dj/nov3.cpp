#include<iostream>
using namespace std;

bool fortunato(int[],int);

int main(){
	int x,a,dim=0,v[100];
	cin>>x;
	a=x;
	while(a>0){
		a/=10;
		dim++;
	}
	for(int i=0;i<dim;i++){
		v[i]=x%10;
		x/=10;		
	}
	if(fortunato(v,dim))
		cout<<"FORTUNATO";
	else
		cout<<"SFORTUNATO";
	
	
	return 0;
}

bool fortunato(int a[],int dim){
	int somma=0,somma2=0;	
	for(int i=0;i<dim;i++){	
		if(i<dim/2)
			somma+=a[i];
		else
			somma2+=a[i];
	}
	if(somma==somma2)
		return true;
	return false;
}

#include<iostream>
using namespace std;

bool opposto(int [],int);

int main(){
	int n,cont=0,v[99];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	
	if(opposto(v,n))
	cout<<"OK";
	else
	cout<<"NO";
	return 0;
}

bool opposto(int v[],int dim){
	bool trovato;
	for(int i=0;i<dim;i++){
	trovato=false;
	for(int j=0; j<dim ; j++){
		if(v[i]==-v[j])
          trovato=true;
	}
	if(trovato==false)
	return false;
	}
	return true;
}

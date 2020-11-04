#include<iostream>
using namespace std;

int control(int dima,int a[],int dimb,int b[]){
		int j=-1;bool trovato ;
	if(dima<dimb)
	return false;
		for(int i=0;i<dimb;i++){
		trovato=false;
			for(int k=0;k<dima;k++){
				
				if((b[i]==a[k])&&(k>j)){
					j=k;
					trovato=true;
					break;	
				}
				
			}
		if(!trovato)				
			return false;
		}	
	
		return true;	
}

int main(){
	int dimA;
	int a[100];
	int dimB;
	int b[100];
		cin>>dimA;
	
	for	(int i=0;i<dimA;i++){
		cin>>a[i];
	}
	
		cin>>dimB;
	
	for(int i=0;i<dimB;i++){
		cin>>b[i];
	}
	 cout << (control(dimA,a,dimB,b) ? "SI" : "NO");
	
	
	return 0;
}

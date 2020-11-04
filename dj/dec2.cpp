#include<iostream>
using namespace std; 

int  inserirePrezzo(){
	int p;
	cin>>p;
	return p;		
}

void aggiungi (int v[],int diff[],int indice,int d,int turno){
	v[turno]=indice;
	diff[turno]=d;
	
}

void numeriDeiGioc(int v[],int p,int indici[],int diff[],int turno){
	int mindiff=p,dif;int indice;
	
		for(int i=0;i<10;i++){	
			cin>>v[i];		
			dif=p-v[i];
			if(dif<0)
				dif*=-1;
			if(dif<mindiff){
				mindiff=dif;
				indice=i;
			}
		}
	aggiungi (indici,diff,indice,mindiff, turno);
	
}

int migliore(int indici[],int& max){
	
	int m,cont=0;
	for(int i=0;i<4;i++){
		cont=0;
		for(int j=i+1;j<5;j++){
			if(indici[i]==indici[j])
				cont++;
		}
		if(cont>max){
			m=indici[i];	
			max=cont;
		}
	}
	return m;
}

int main(){
	int max,p,gioc[100],indici[100],diff[100],indice,turno;	
	
		for(turno=0;turno<5;turno++){
			p=inserirePrezzo();
			numeriDeiGioc(gioc,p,indici,diff,turno);
		}
		for(turno=0;turno<5;turno++){
			cout<<"Turno : "<<turno+1;
			cout<<" "<<indici[turno]<<" "<<diff[turno]<<endl;	

		}
	indice=migliore(indici,max);
	cout<<endl<<" il migliore: "<<endl;
	cout<<indice<<"  "<<max;

	return 0;
}

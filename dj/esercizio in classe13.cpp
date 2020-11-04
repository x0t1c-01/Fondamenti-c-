//scrivere un programma c++ con le seguenti funzioni;
//estrazione di un numero casuale
//lettura di una sequenza di uunmeri interi col tappo -1
//contare la somma di due elementi consecutivi = X
// stampare il conteggio
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int x=rand()%25;
	cout<<x;
	int cont=0;
	int prec,corr;
	cin>>corr;
		if(corr!=-1){
			prec=corr;
			cin>>corr;
	}
		while(corr!=-1){
			if(prec+corr==x)
			cont++;
			prec=corr;
			cin>>corr;
		}
			cout<<cont;
		return 0;
}

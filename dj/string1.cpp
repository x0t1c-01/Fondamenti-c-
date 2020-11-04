#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char p[5]="ciao";
	char parole[400];
	char parola[100][100];
	char *l;
	int dim=0;
	int cont=0;
cin.getline(parole,100);
	l=strtok(parole," ");
	while(l!=0){
		if(strcmp(p,l)==0){
			cont++;
		}
	strcpy(parola[dim++],l);
			l=strtok(0," ");
	}
	for(int i=0;i<dim;i++)
	cout<<parola[i]<<endl;
	
	cout<<cont;
}

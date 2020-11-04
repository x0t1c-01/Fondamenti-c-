//scrivere un programma che cambia il valore di x con quello di y.
//quando si fa un passaggio di valore si usa int e il nome del valore inserito normalmente.
// quando si fa un passaggio di riferimento si una int& e il nome del valore.
//facendo cosi non chiamiamo x e y con nuovi variabili "a e b" ma e' un modo diverso di chiamare x e y usando le funzioni.
//il passaggio di riferimento e' molto meglio del passaggio di vaolre perche' occupa meno spazio
//per dichiarare un valore costante si usa 		cost int h=7;
//si puo anche fare un passaggio di riferimento costante  come 		int quadrato(cost int& x) 
#include<iostream>
using namespace std;
void scambia(int &,int &);
int main(){
	int x,y;
	cin>>x>>y;
	scambia(x,y);
	cout<<x<<y;
	return 0;
}
void scambia(int& a,int& b){
	int temp=a;
	a=b;
	b=temp;
	
}

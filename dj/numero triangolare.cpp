//scrivere un programma letto da input un intero positivo e verifica se e' un numero triangolare o meno
#include<iostream>
using namespace std;
bool triangolare(unsigned);
int main (){
	unsigned N;
	cin>>N;
		if(triangolare(N))
			cout<<"SI";
		else
			cout<<"NO";
	return 0;
}
bool triangolare(unsigned x){
	unsigned somma,i;
	for(i=1;somma=0,somma<x;i++){
		somma+=i;
	}
		if(somma==x)
			return true;
		return false;
}

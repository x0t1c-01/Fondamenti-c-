//making a program using functions
#include<iostream>
using namespace std;
int potenza (int,int);
int prodotto (int,int);
int main(){
	int base, exp;
	cin>>base>>exp;
	cout<<potenza(base,exp);
}
int potenza(int b,int e){
	int pot=1;
	for(int c=0;c<e;c++)
	pot= prodotto(pot,b);
	return pot;
}
int prodotto(int a,int b){
	int prod=0;
	for(int c=0;c<b;c++)
		prod+=a;
		return prod;
}

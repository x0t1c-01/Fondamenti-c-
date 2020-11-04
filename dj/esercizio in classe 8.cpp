//do while, determinare l'esponente 
#include<iostream>
using namespace std;
int main(){
	int base,exp;
	cin>>base;
	//using do while allows to do the first instruction without entering like while
	do {
		cout<<"inserire l'esponente (>=0)";
		cin>>exp;
	}
	while(exp<0);
	int potenza=1;
	for (int cont=0;cont<exp;cont++)
	potenza*=base;
	cout<<potenza;
	
	
	return 0;
}

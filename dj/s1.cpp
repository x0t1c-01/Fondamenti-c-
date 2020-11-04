#include<iostream>
using namespace std;
int sommaprimi(int n,int somma){
	if(n<2)
		return somma;
	if(n%2==0)
	return sommaprimi(n/=2,somma+=2);
	if(n%3==0)
		return sommaprimi(n/=3,somma+=3);
	if(n%5==0)
		return sommaprimi(n/=5,somma+=5);
	return n;
}
int main(){
	int x,somma;
	cin>>x;
	if(x>=0)
	somma=sommaprimi(x,0);
	cout<<somma;
	return 0;
}

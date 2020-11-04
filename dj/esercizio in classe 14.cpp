//using functions by writing them down.
// making a making a square function
#include<iostream>
using namespace std;
int quadrato(int A){
	int q=A*A;
	return q;
}
int main(){
	int x;
	cin>>x;
	cout<<quadrato(x);  //invocazione di una fuznzione "quadrato" e x e' un arametro attuale
	return 0;
}


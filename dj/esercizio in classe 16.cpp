//scrivere una funzione che darto un valore x e stampa 1234
//                                                     2345
//              a cube of numbers                      3456
//                                                     4567
#include<iostream>
using namespace std;
void stampaquadrato(int lato){
	for(int r=1;r<=lato;r++){
		for(int c=r;c<lato+r;c++)
			cout<<c;
		cout<<endl;
	}
}
int main(){
	int x;
	cin>>x;
		stampaquadrato(x);
}

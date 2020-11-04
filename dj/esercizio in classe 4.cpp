#include<iostream>
using namespace std;
int main(){
	int somma=0;
	int n;
	cin>>n;
	while(n!=0){
		somma+=n;
		cin>>n;
	}
	cout<<somma;
	return 0;
}

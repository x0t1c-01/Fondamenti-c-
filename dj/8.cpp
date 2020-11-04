#include<iostream>
using namespace std;
int main(){
	int x,y;
	int somma=0;
	cin>>x;
	cin>>y;
	for(int i=x;i<=y;i++){
		if(i%2!=0)
		somma+=i;
		
	}
	cout<<somma;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int x;
	int cont=0;
	cin>>x;
	while(x!=0){
		if((x%3==0)&&(x%2!=0)){
		cont++;
	}
	     cin>>x;
	     }
	cout<<cont;
	
	return 0;
}

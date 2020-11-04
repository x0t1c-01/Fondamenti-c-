#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int N;
	cin>>N;
	int Ntemp=N;
	int Ninv=0;
	int differenza;
	while(N!=0){
		Ninv=(N%10)+(Ninv*10);
		N/=10;
	}
	differenza=(Ntemp-Ninv);
	cout<<differenza;
		
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	bool pari=true;
	int n;
	cin>>n;
	while(n!=-1){
		if(n%2!=0)
		pari=false;
		cin>>n;
	}
		if(pari)
		cout<<"si";
		else
		cout<<"no";
	return 0;
}

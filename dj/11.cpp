#include<iostream>
using namespace std;
int main(){
	int N;
	bool zero=false;
	cin>>N;
		if(N==0){
			zero=true;
		}
	while(N!=0){
		if(N%10==0){
			zero=true;
		}
		N/=10;
	}
	if(zero)
	cout<<"NO";
	else
	cout<<"SI";
}

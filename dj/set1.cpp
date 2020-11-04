#include<iostream>
using namespace std;
int main(){
	int a1,a2,b1,b2,sq1,sq2;
	cin>>a1>>b1>>a2>>b2;
	if(a1>a2){
		sq2=a1;
	}
	else sq2=a2;
	if(b1<b2){
		sq1=b1;
	}
	else sq1=b2;
		if(sq1>sq2){
			cout<<sq1-sq2-1;
		}
	else cout<<0;
}

#include<iostream>
using namespace std;
int dog(int a,int& b){
	while(a>b){
		b=b+3;
		a=--b;
	}
	return b-a;
}
int main(){
	int a=1,b=0;
	cout<<dog(a,b);
	cout<<a<<b;
	return 0;
}

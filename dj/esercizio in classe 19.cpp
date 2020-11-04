#include<iostream>
using namespace std;
int funzione(int ,int &);
int main(){
	int x=2,y=0,z;
	z=funzione(x,y);
	cout<<x<<y<<z;
	return 0;
}
int funzione(int a,int& b){
	a--;
	b=a+3;
	return a;	
}

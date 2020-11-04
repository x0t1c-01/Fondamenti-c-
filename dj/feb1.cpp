#include<iostream>
using namespace std;

bool primo(int);
bool pali(int,int);
int invert(int);

int main(){
	int n,y;
	cin>>n;
	y=invert(n);
	if(primo(n)&&primo(y)&&!pali(n,y))
		cout<<"SI";
		else
		cout<<"NO";	
	return 0;
}

bool primo(int x){
	for(int i=2;i<10;i++)
		if((x%i==0)&&(x!=i))
		return false;
		return true;
}

bool pali(int x,int y){
	if(x==y)
	return true;
	return false;
}

int invert(int x){
	int temp,inv;
	while(x>0){
		temp=x%10;
		inv=inv*10+temp;
		x/=10;
	}
	return inv;
}












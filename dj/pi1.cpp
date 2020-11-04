#include<iostream>
using namespace std;
int main(){
	int n,cont=0;
	char x,y,temp;
	char z;
	cin>>n;
	cin>>x>>y;
	
	cin>>z;
		while(z!='*'&&temp!='*'){
		temp=z;
		cin>>z;
		if((temp==x)&&(z==y))
			cont++;	
		}
		
		if(cont==n)
			cout<<"OK";
		else
			cout<<"NO";	
	return 0;
}

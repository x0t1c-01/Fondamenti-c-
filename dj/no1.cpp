#include<iostream>
using namespace std;
int main(){
	char a;
	char temp;
	int x,cont=0;
		cin>>a;
		while(a!='*'){
			temp=a;
			cin>>a;
			if(temp==a)
			cont++;
	}
	cin>>x;
	if(cont>=x-1)
		cout<<"SI";
	else
		cout<<"NO";
	
	
	
	return 0;
}

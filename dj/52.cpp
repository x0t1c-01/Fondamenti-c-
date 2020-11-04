#include<iostream>
using namesapce std;


int main(){
	char c,temp;
	int cont=0;
	cin>>c;
	while(c!=temp&&temp!='.'){
		temp=c;
		cin>>c;
		if(temp!='.')
			cont++;
		
		
		if(temp=='.'&&c=='.')
			cout<<0;
	}
	
	
	return 0;
}

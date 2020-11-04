#include<iostream>
using namespace std;


int main(){
	string c;
	cin>>c;
	int cont=1;
	for(int i=0;i<c.length();i++){
		
		if(c[i]==c[i+1]){
			cont++;
		}
		else	
			cout<<cont<<c[i];
			cont=0;
		}
	
	cout<<" "<<c.length();
	
	
	
	return 0;
}

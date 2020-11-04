#include<iostream>
using namespace std;
int main(){
	int x,y=-1,somma=0;
	cin>>x;
	while(!(x==0)&&(y==0)){
		if(x!=0){
			somma+=x; 
		}
		else{
			cout<<somma<<endl;
		somma=0;
		}
		y=x;
		cin>>x;	
	}	
	return 0;
}

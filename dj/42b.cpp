#include<iostream>
using namespace std;

int main(){
	bool cond=false;
	int x=0,y=0,cont=0;
	int a[100];
	int media=0,somma=0;
		
	cin>>x;
	if(x==-50){
		cout<<"VUOTA";
		return 0;
	}
	while(x!=-50){		
		a[cont]=x;	
		somma+=x;
		cont++;
		cin>>x;
	}
	
	media=somma/cont;	
    
	for(int i=0;i<cont;i++){
    	
		if(a[i]>=media){
			
    		if(cond==false){
    		y=a[i];
    		cond=true;
    		}
    		
		if(cond){
			if(a[i]<y)
				y=a[i];
			}
		}
    }
		cout<<y;
	return 0;
}

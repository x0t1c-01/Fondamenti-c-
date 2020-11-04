#include<iostream>
using namespace std;
int main(){
	int cor,pre;
	bool inc=false,dec=false,cond=false,cond2=true;
	cin>>cor;
	if(cor==0){
	cout<<"NO";
	return 0;
	}	
	pre=cor;
	cin>>cor;
	while(cor!=0){
			if(cor==pre)
				cond2=false;
		if(cor>pre&&dec==false)
			inc=true;
		if(inc&&cor<pre)
			dec=true;
		
		if(inc&&dec&&cor>=pre)
		cond=false;
		else if(cond2&&inc&&dec&&cor<pre)
		cond=true;	
		pre=cor;
		cin>>cor;
	}
	if(cond)
		cout<<"SI";
	else
		cout<<"NO";
	return 0;
}

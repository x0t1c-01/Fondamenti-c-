#include<iostream>
using namespace std;


bool vocale(int x){
        if((x=='a')||(x=='e')||(x=='i')||(x=='o')||(x=='u'))
            return true;
    return false;
}

bool conseq(char x,char y){
	if(vocale(x)&&vocale(y)){
		return true;
}
	if(!vocale(x)&&!vocale(y)){
		return true;
	}
	return false;
}

int main(){
	int i=0;
	char s[100];
	char x;
    int cont=1;
	cin>>x;
    while(x!='.'){
    	
		s[i++]=x;
		cin>>x;
	}
	
	for(int j=0;j<i;j++){
		if(j+1!=i){
			if(conseq(s[j],s[j+1])){
				cont++;
			}
		}
	}
	
	cout<<cont;
	
	return 0;
}

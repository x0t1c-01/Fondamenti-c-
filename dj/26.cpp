#include<iostream>
using namespace std;

bool min(char c) {
		if(c>='a'&&c<='z'){
		return true;
	}
	return false;
	}
	
	bool mai(char d) {
		if(d>='A'&&d<='Z'){
			return true;
		}
		return false;
	}		
	
int main(){
	char att,pre;
	bool cond=false;
	cin>>att;
	while(att!='*'){
		if(min(att)&&min(pre)&&att==pre)
			cond=true;
		if(mai(att)&&mai(pre))
			cond=true;			
		pre=att;
		cin>>att;
	}
	if(cond)
		cout<<"SI";
	else
		cout<<"NO";
	return 0;
}

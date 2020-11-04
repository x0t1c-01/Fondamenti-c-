
#include<iostream>
using namespace std;
int main(){
	char x;
	bool alph=true;
	cin>>x;
	while(x!='.'){
		if((x>='a')&&(x<='z')||(x>='A')&&(x<='Z'))
			alph=false;
		cin>>x;
	}
	if(alph)
		cout<<"SI";
	else
		cout<<"NO";
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	char x;
	bool alph=true;
	cin>>x;
	while(x!='.'){
		if(x!=((x>='a')&&(x<='z')||(x>='A')&&(x<='Z')))
			alph=false;
		cin>>x;
	}
	if(alph==false)
		cout<<"NO";
	else
		cout<<"SI";
	return 0;
}

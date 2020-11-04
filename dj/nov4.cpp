#include<iostream>
using namespace std;
int main(){
	char x,y = 'b';
	bool cresc=false;
	cin>>x;
	while(x!='*'){
		if((x!='a')&&(x!='e')&&(x!='i')&&(x!='o')&&(x!='u')){
			if(x<y){
				cresc=true;	
			}
		y=x;
		}
		cin>>x;
	}
	if(!cresc)
		cout<<"SI";
	else
		cout<<"NO";	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	char x,y;
	bool con=false;
	cin>>x;
		while(x!='*'){
		y=x;
		cin>>x;
		if(x==y)
		con=true;
		
	}
	if(con)
		cout<<"SI";
	else
		cout<<"NO";	
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	 char x,y,temp;
	 cin>>x>>y;
	if (((x>='a')&&(x<='z'))&&((y>='a')&&(y<='z'))){
		for(char i=x;i<=y;i++){
	 
	 		temp=toupper(i);
			 cout<<temp;	
		}
	}
	return 0;
}

#include<iostream>
#include<string>
using namespace std;
int main(){
	char a[26];
	string p;
	for(int i=0;i<26;i++){
		a[i]=(char)(97+i);
	}
		
	cin>>p;
	for(int i=0;i<p.length();i++){
		int d=(int)p[i]-97;
			if(d<14) 
	 		cout<<a[25-d];
			else
				cout<<a[d=(25-d)];
	}
	return 0;
}

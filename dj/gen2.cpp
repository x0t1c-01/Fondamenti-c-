#include<iostream>
#include<cstring>
using namespace std;

bool control(char s[],int l){
	int index=0;
	int a[26]={0};
	for(int i=0;i<l;i++){
		if(s[i]>=97 && s[i]<=122){
			index=s[i]-97;
			a[index]=1;
			}			
	}
	for(int i=0;i<26;i++){
		if(a[i]==0)
			return false;
	}
	return true;
				
}
int main(){
	char s[400];
	cin.getline(s,400);
	int l=strlen(s);
	if(control(s,l))
		cout<<"SI";
	else	
		cout<<"NO";
}

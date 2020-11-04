#include<iostream>
using namespace std;
void dic(char a[],int n,int b[]){
	for(int i=0;i<n;i++){
		if(b[i]<26)
			cout<<a[b[i]];
	}
}

int main(){
    int n;
	char a[26];
	int b[100];
	for(int i=0;i<26;i++){
		cin>>a[i];
	}
	cin>>n;
		for(int j=0;j<n;j++){
		cin>>b[j];
		}
	dic(a,n,b);

	return 0;
}

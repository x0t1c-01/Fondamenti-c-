#include<iostream>
using namespace std;

bool vocale(char a[],int x){
    for(int i=0;i<x;i++){
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
            return false;
    }
    return true;
}

int main(){
    char s[100];
    int i=0;
    char x;
    cin>>x;
    while(x!='*'){
		s[i++]=x;
		cin>>x;
	}
    if(!vocale(s,i))
        cout<<"ALMENO 1 VOCALE";
    else
        cout<<"NESSUNA VOCALE";
    return 0;
}

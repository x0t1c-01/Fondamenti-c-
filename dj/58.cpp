#include<iostream>
#include<cmath>
using namespace std;
int convert(int n,int a[]){
	int j=0, somma=0;
	for(int i=n-1;i>=0;i--){
		somma+=(a[i]*pow(2,j++));
	}	
	return somma;
}	

bool verifica(int n)  
{  
    if(n==0)
        return 0;  
    while(n!=1){  
        if(n%2!=0)  
            return 0;  
        n=n/2;  
    }  
    return 1;  
}  
	
int main(){
	int n;
	cin>>n;
	int a[100];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
	cout<<convert(n,a)<<" "<<(verifica(convert(n,a)) ? "SI":"NO");
	
	
	return 0;
}

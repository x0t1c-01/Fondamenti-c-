#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n,k,a[100];
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
		cin>>k;
	int max=INT_MIN;
	int somma=0;
	for(int i=0;i<n;i++){
		if(n-k+1==i)
			break;
		else
		
			for(int j=0;j<k;j++){
				somma+=a[i+j];
			}
			if(somma>max){
				max=somma;
				somma=0;
			}
			else
				somma=0;
			
	}

	cout<<max;
	return 0;
}

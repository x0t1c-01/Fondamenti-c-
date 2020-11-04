#include<iostream>
using namespace std;
bool comprimi(int,int);
bool verif(int[],int);
int main(){
	int n,arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	if(verif(arr,n))
		cout<<"SI";
	else
		cout<<"NO";
	
	
	return 0;
}
bool verif(int arr[],int n){
	for(int i=0;i<n-1;i++)
		for(int j=i+1;i<n;i++)
		if(comprimi(arr[i],arr[j]))
			return true;
		return false;	
}
bool comprimi(int a,int b){
	int r=a%b;
	while(r>0){
		a=b;
		b=r;
		r=a%b;
	}
	if(b!=1)
		return false;
	return true;
}

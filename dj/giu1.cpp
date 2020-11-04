#include<iostream>
using namespace std;

int control(int a[],int length,int cn){
	int temp=-1;
	int z;
	if(length<=0)
		return temp;
	for(int i=0;i<length;i++){
		for(int j=i+1;j<length;j++){
			if(a[i]-a[j]<0)
				z=(a[i]-a[j])*-1;
			else
				z=a[i]-a[j];
			if((z<=cn)&&(z>temp))
				temp=z;		
		}
	}
	return temp;
}

int main(){
	int n,x;
	int a[100];
	cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		
	cin>>x;
	cout<<control(a,n,x);
	return 0;
}

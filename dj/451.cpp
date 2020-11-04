#include<iostream>
using namespace std;

int max(int a[], int dim){
	int temp;
	for(int i=0;i<dim;i++){
		for(int j=i+1;j<dim;j++){
			if(a[j]>a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int nmax=0;
	for (int i=0;i<dim;i++){
    	int val=1;
    for(int j=0;j<(dim-i);j++){
        val*=10;
    }
    nmax+=a[i]*val;
	}
	return nmax/10;
}
int min(int a[], int dim){
	int temp;
	for(int i=0;i<dim;i++){
		for(int j=i+1;j<dim;j++){
			if(a[j]<a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int nmin=0;
	for (int  i=0;i<dim;i++){
    	int val=1;
    for(int j=0;j<(dim-i);j++){
        val*=10;
    }
    nmin+=a[i]*val;
	}
	return nmin/10;
}

int main(){
	int n,i=0,a[10],temp;
	cin>>n;
	int cont=0;
	while(n>0){
		temp=n%10;
		a[i++]=temp;
		n/=10;
		cont++;
	}
	int max1=max(a,cont);
	int min1=min(a,cont);
	cout<<max1-min1;
	
	return 0;
}

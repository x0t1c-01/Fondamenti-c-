#include<iostream>
#include<climits>
using namespace std;


int main(){
	bool cond=false;
	int a[100];
	int x;
	int dim=0,cont=0;
	cin>>x;
	while(x!=0){
		a[dim++]=x;
		cin>>x;
	}
	int min=INT_MAX;
	for(int i=0;i<dim;i++){
		if(a[i]<min)
			min=a[i];
	}
	int max=INT_MIN;
	for(int i=0;i<dim;i++){
		if(a[i]>max)
			max=a[i];
	}
	int diff=max-min;
	for(int i=min+1;i<max;i++){
		for(int j=0;j<dim;j++){	
			if(a[j]==i){
				cond=true;
			}
		}
		if(cond){
			cont++;
			cond=false;		
		}
	}
	if(dim==1)
		cout<<0;
	else
		cout<<diff-cont-1;
	return 0;
}

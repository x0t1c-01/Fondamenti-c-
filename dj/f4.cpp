#include<iostream>
using namespace std;
int main(){
	int n,temp,dim2=0,cont=0,x,a[10],v[10],dim,i=0;
	cin>>n;

	while(n>0){
		temp=n%10;
		n/=10;
		v[i++]=temp;			
	}
	
	dim=i;
	
	for (int j=0;j<10;j++){
		cin>>x;
		if(x==-1)
			break;
		else{
			a[j]=x;
			dim2++;
    }}
    
    bool first=false;
    
    for(i=dim-1;i>=0;i--){
		for(int j=0;j<dim2;j++){
			if(v[i]==a[j]){
			
			cont++;
		}}
		if(cont!=0){
			cout<<cont;
			first=true;
		}
		if(cont==0&&first==true)
			cout<<cont;
			cont=0;
	}
	
	return 0;
}

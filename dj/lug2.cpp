#include<iostream>
using namespace std;

bool control(int n,int a[][100],int riga){
	bool cond;
		if(riga==n)
			return false;
	
	for(int i=0;i<n;i++){
		cond=true;
			for(int j=0;j<n;j++){
				if(a[j][i]!=a[riga][j])
					cond=false;
			}
		if(cond)
			return true; 

	}
	control(n,a,riga+=1);	
}

int main(){
	int n;
	int a[100][100];
		cin>>n;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin>>a[i][j];
			}
		}
		
	if(control(n,a,0))
		cout<<"SI";
	else
		cout<<"NO";	
	
	return 0;
}

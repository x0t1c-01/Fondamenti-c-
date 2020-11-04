#include<iostream>
using namespace std;

int calcolo(int a[],int cont){
	int e=1;
	
	for(int i=0;i<cont-1;i++){
		e*=10;
	}
	int num=0;
	
	for(int i=0;i<cont;i++){
		num+=a[i]*e;
		e/=10;
	}
	
	return num;
}

void diff(int x){
	int a[10],c[10],cont=0,result[10],y,z,temp;
	y=x;
	z=x;
	while(y>0){
		y/=10;
		cont++;
	}
	for(int i=0;i<cont;i++){
		a[i]=x%10;
		x/=10;
	}
	for(int i=0;i<cont;i++){
		for(int j=i+1;j<cont;j++){
			if(a[i]<=a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<cont;i++){
		c[i]=z%10;
		z/=10;
	}
	for(int i=0;i<cont;i++){
		for(int j=i+1;j<cont;j++){
			if(c[i]>=c[j]){
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	int nmax=calcolo(a,cont);
	int nmin=calcolo(c,cont);
	cout<<nmax-nmin;
}


int main(){
	int n;
	cin>>n;
	diff(n);
	return 0;
}

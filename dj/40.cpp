#include<iostream>
using namespace std;
int main(){
	int cont=0,cont2=0,dim=0;
	float media;
	char b[100];
	char a[100];
	for(int i=0;i<100;i++){
		cin>>a[i];
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')){
		cont++;
		b[dim++]=a[i];
		}
		if(a[i]>='a'&&a[i]<='z')
		cont2++;
		
	}
	if(cont!=0)
		media=((float)cont2/cont)*100;
	if(cont==0)
	cout<<"VUOTO";
	else{
		for(int i=dim-1;i>=0;i--)
			cout<<b[i];
	cout<<endl;	
	cout<<media<<'%';
	}

	
	return 0;
}


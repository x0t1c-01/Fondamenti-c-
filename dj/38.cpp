#include<iostream>
using namespace std;
int main(){
	int dim=0,cont=0,cont2=0;
	int a[100];
	float media;int somma=0;
	int b[100];

	for(int i=0;i<100;i++){
		cin>>a[i];
		if(a[i]>50||a[i]<-50){
		
		b[dim++]=a[i];
		cont++;
		}
		else{
		
		somma+=a[i];
		cont2++;
		}
	}
	if(cont2!=0)
	media=(float)somma/cont2;
	if(cont==0)
		cout<<"VUOTO1";
	else{
		for(int i=0;i<dim;i++)
		cout<<b[i];
	}
	if(cont2==0)
		cout<<endl<<"VUOTO2";
	else
		cout<<endl<<media;	
	
	return 0;
}

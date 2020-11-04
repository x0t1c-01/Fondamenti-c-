#include<iostream>
using namespace std;


int main(){
    int dim=0,cont=0,cont2=0;
    float media;
    char c[100],b[100];
    for(int i=0;i<100;i++){
        cin>>c[i];
        if((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')){
		cont++;
		b[dim++]=c[i];
		}
        if(c[i]>='a'&&c[i]<='z')
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

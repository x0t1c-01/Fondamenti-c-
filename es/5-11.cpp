#include<iostream>
using namespace std;


int main(){
    int a[100];
    int n,cont=0;
    double somma;
    cin>>n;
    int d=n*n;
    for(int i=0;i<d;i++){
        cin>>a[i];
    }
    for(int i=1;i<d;i++){
        if(i%2!=0){
            somma+=a[i];
            cont++;
        }
    }
double media=somma/cont;

    cout<<media;

    for(int i=0;i<d;i++,i+=4){
        for(int j=n;j>0;--j){
            somma+=a[i];
        }
    }



    return 0;
}

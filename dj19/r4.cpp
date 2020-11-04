#include<iostream>

using namespace std;

int ricorsione(int x,int n,int a[],int cont2){
     int cont=0;
     for(int i=0;i<n;i++){
         if(a[i]==x){
            cont++;
            a[i]=0;
        }
     }
     if(cont==0)
        return cont2;
    cont2+=cont;
     x=cont;
        ricorsione(x,n,a,cont2);
 }

int main(){
    int x;
    int n;
    cin>>x>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cont=0;
    cout<<ricorsione(x,n,a,cont);


    return 0;
}

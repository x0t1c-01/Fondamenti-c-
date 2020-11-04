#include<iostream>
using namespace std;
int main(){
    int n,x,cont=0;
    int a[100];
    cin>>n;
    int z=n;
    while(n>0){
        x=n%10;
        a[cont++]=x;
        n/=10;
    }
    n=0;
    for(int i=0;i<cont;i++){
        n+=a[i];
        n*=10;
    }
    n/=10;

    cout<<z-n;

    return 0;
}

#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a[100];
    int b[10];
    int x;
    int i=0,j=0;
    cin>>x;
    while(x!=-1){
        a[i++]=x;
        cin>>x;
    }
    while(n>0){
        int cont=0;
        int r=n%10;
        n=n/10;
        for(int j=0;j<i;j++){
            if(r==a[j])
                cont++;
        }
        b[j++]=cont;
    }

    for(int k=j-1;k>=0;k--){
        if((k==j-1)&&b[k]==0)
            continue;
        cout<<b[k];
    }


    return 0;
}

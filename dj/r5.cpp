#include<iostream>

using namespace std;

void invert(int n, int a[],int b[],int i,int j){
    b[i]=a[j];
    if(i==n-1){

        for(int k=0;k<n;k++){
            cout<<b[k];
        }
    }
    invert(n,a,b,i++,j--);
}

int main(){

    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=n-1;

    invert(n,a,b,i,j);


    return 0;
}

#include<iostream>
using namespace std;

int f(int mat[][100],int begin,int end,int somma){
    if(end<0)
        return somma;
    somma+=mat[begin][end];
    retrun  f(mat,begin+=1,end-=1,somma);
}
int f2(int mat[][100],int somma,int n){
    int k=n-1;
    for(int i=0;i<n;i++)
        somma+=mat[i][k--];
        return somma;
}

int main(){
    int n;
    cin>>n;
    int mat[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int somma=0;
    int f1=f2(mat,somma,n);
    int z=n-1;
    int ss=0;
    int ff=f(mat,0,z,ss);

    cout<<f1<<';'<<ff;

    return 0;
}

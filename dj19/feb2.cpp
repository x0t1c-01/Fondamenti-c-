#include<iostream>
#include<climits>
using namespace std;

int main(){
int m,n;
cin>>m>>n;
int mat[100][100];
int a[100];
int b[100];
for(int i=0;i<m;i++){
    int somma=0;
    for(int j=0;j<n;j++){
        cin>>mat[i][j];
        somma+=mat[i][j];
    }
    a[i]=somma;
}
for(int i=0;i<n;i++){
    int cont=0;
    for(int j=0;j<m;j++){
        if(mat[j][i]>5)
            cont++;
    }
    b[i]=cont;
}
int min=INT_MAX;
int pmin=INT_MAX;
for(int i=0;i<m;i++){
    if(a[i]<min){
        min=a[i];
        pmin=i;
    }
}
int pmax=INT_MIN;
int max=INT_MIN;
for(int i=0;i<n;i++){
    if(b[i]>max){
        max=b[i];
        pmax=i;
    }
}
cout<<pmin<<" "<<pmax;

return 0;
}

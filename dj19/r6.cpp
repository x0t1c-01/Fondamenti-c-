#include<iostream>

using namespace std;

bool verifica(int mat[][100],int n,int colonna){
    if(n<2||n>10)
        return false;
    if(colonna==n-1)
        return true;

    int riga=n-1-colonna;
    int somma=0;

    for(int i=0;i<=riga;i++)
        somma+=mat[i][colonna];

    for(int i=colonna+1;i<n;i++)
        somma+=mat[riga][i];


    int z=mat[riga][colonna];

        if(somma%z==0)
            verifica(mat,n,colonna=colonna+1);
        else
            return false;
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
if(verifica(mat,n,0))
    cout<<"SI";
else
    cout<<"NO";

return 0;
}

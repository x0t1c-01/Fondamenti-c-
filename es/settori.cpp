#include<iostream>

using namespace std;


bool settori(int mat[][100],int r,int n,int cont,int somma){
    int rz=cont;
    for(int i=cont;i>=0;i--){
            if(i==rz)
                somma+=mat[i][rz];
            else{
                somma+=mat[i][rz];
                somma+=mat[rz][i];
            }
        }
        if(somma>n)
            return false;
            somma=0;
    if(rz<r-1)
        return settori(mat,r,n,cont+=1,somma);

    return true;
}


int  main(){
    int mat[100][100];
    int r;
    cin>>r;
    for(int i=0;i<r;i++)
        for(int j=0;j<r;j++)
            cin>>mat[i][j];

    int n;
    cin>>n;
    int cont=0;
    int somma=0;
    if(settori(mat,r,n,cont,somma))
        cout<<"ok";
    else
        cout<<"no";



    return 0;
}

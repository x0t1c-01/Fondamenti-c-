
#include<iostream>

using namespace std;

bool control(int mat[][100],int n,int riga){
    if(riga==n)
        return true;
        for(int i=0;i<n;i++){
            int cont=0;
            for(int j=0;j<n;j++){
                if(mat[riga][i]==mat[riga][j])
                    cont++;
                    if(mat[riga][i]>n||mat[riga][j]<1)
                        return false;
            }
            if(cont>1)
                return false;
        }

control(mat,n,riga+=1);

}

bool control2(int mat[][100],int n,int col){
    if(col==n)
        return true;
        for(int i=0;i<n;i++){
            int cont=0;
            for(int j=0;j<n;j++){
                if(mat[i][col]==mat[j][col])
                    cont++;
                if(mat[i][col]>n||mat[i][col]<1)
                    return false;
            }
            if(cont>1)
                return false;
        }

control2(mat,n,col+=1);

}


int main(){
        int n;
        int mat[100][100];
        cin>>n;
        int a[100];
        for(int i=0;i<n*n;i++)
                cin>>a[i];


        int ind=0;

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                mat[i][j]=a[ind++];

        if(control(mat,n,0)&&control2(mat,n,0))
                cout<<"SI";
        else
                cout<<"NO";



return 0;

}

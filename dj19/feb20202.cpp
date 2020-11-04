#include<iostream>
using namespace std;

void riempi(int mat[][100],int arr[],int n,int m){
    bool cond=true;
    int z=n*2;
    int left=0,top=0,right=z-1,bottom=z-1;
    int ind=0;
    int ind2=m-1;
    while(1){
        if(cond){
            ind=0;
            if(left>right)
                return;

            for(int i=left;i<=right;i++)
                mat[top][i]=arr[(ind++)%m];

            top++;

            if(top>bottom)
                return;

            for(int i=top;i<=bottom;i++)
                mat[i][right]=arr[(ind++)%m];

            right--;

            if(left>right)
                return;

            for(int i=right;i>=left;i--)
                mat[bottom][i]=arr[(ind++)%m];

            bottom--;

            if(top>bottom)
                return;

            for(int i=bottom;i>=top;i--)
                mat[i][left]=arr[(ind++)%m];

            left++;

            cond=false;
        }

        if(!cond){
            ind2=m-1;
            if(left>right)
                return;

            for(int i=right;i>=left;i--){
                if(ind2<0)
                    ind2=m-1;
                mat[bottom][i]=arr[(ind2--)%m];
            }
            bottom--;

            if(top>bottom)
                return;

            for(int i=bottom;i>=top;i--){
                if(ind2<0)
                    ind2=m-1;
                mat[i][left]=arr[(ind2--)%m];
            }
            left++;

            if(left>right)
                return;

            for(int i=left;i<=right;i++){
                if(ind2<0)
                    ind2=m-1;
                mat[top][i]=arr[(ind2--)%m];
            }

                top++;

            if(top>bottom)
                return;

            for(int i=top;i<=bottom;i++){
                if(ind2<0)
                    ind2=m-1;
                mat[i][right]=arr[(ind2--)%m];
            }
            right--;

        cond=true;
        }
    }
}

 int main(){

     int n,m;
     cin>>n;
     cin>>m;

     if(m==0)
        return 0;

     int arr[100];
     for(int i=0;i<m;i++){
         cin>>arr[i];
     }
     if(n==0)
        return 0;

     int mat[100][100];
     int z=n*2;

     riempi(mat,arr,n,m);

     for(int i=0;i<z;i++){
         for(int j=0;j<z;j++){
             cout<<mat[i][j];
         }
    }

     return 0;
 }

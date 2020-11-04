#include<iostream>
using namespace std;

int main(){
int m,n;
int a[100];
int mat[100][100];
cin>>m;
cin>>n;
for(int i=0;i<n;i++)
    cin>>a[i];

int ind=0;
int ind2=n-1;
for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        if(j>i)
            mat[i][j]=a[(ind++)%n];

        if(i>j)
            mat[i][j]=a[(ind2--)%n];

        if(ind2==-1)
            ind2=n-1;
    }

}

int somma=0;
int arr[100];
int index=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i!=j){
                somma+=mat[j][i];
            }
        }
        arr[index++]=somma;
        somma=0;
    }

    for(int i=0;i<m;i++){
        mat[i][i]=arr[i];
    }


for(int i=0;i<m;i++){
    for(int j=0;j<m;j++){
        cout<<mat[i][j];
    }
}

return 0;
}
